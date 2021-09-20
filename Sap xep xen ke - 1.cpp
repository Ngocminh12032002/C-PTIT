#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) { 
		int n, a[10000], b[10000], k = 0;
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for (int i = n - 1; i >= n / 2; i--) {
			b[k] = a[i];
			k += 2;
		}
		k = 1;
		for (int i = 0; i < n / 2; i++) {
			b[k] = a[i];
			k += 2;
		}
		for (int i = 0; i < n; i++) cout << b[i] << " ";
		cout << endl; 
	}
}
