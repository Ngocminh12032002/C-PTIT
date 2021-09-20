#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) cin >> a[i];
}
int max(int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) max = a[i];
	}
	return max;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a[1000];
		int n;
		cin >> n;
		nhap(a, n);
		cout << max(a, n);
		cout << endl;
	}
}
