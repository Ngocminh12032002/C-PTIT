#include<iostream>
using namespace std;
int ktrafibo(int n) {
	if (n == 0 || n == 1) return 1;
	int fn = 1, f1 = 1, f0 = 0;
	while (fn < n) {
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	if (fn == n) return 1;
	else return 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a[10000];
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) {
			if (ktrafibo(a[i]) == 1) cout << a[i] << " ";
		}
		cout << endl;
	}
}
