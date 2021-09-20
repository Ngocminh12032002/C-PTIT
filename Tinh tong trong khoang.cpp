#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m, l, r; cin >> n >> m; 
		int a[n]; 
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
		}
		while (m--) {
			long long sum = 0; cin >> l >> r; 
			for (int i = l - 1; i < r; i++) {
				sum += a[i];
			}
			cout << sum << endl; 
		} 
	}
	return 0; 
}
