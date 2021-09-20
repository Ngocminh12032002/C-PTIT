#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; 
		cin >> n >> k; 
		int a[n][k]; 
		int kq[n * k]; 
		int c = 0; 
		for (int i = 0; i < k; i++) { 
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				kq[c++] = a[i][j];
			}
		} sort(kq, kq + n * k);
		for (int i = 0; i < c; i++) { 
			cout << kq[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
