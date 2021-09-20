#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
#define ll long long
int main() {
	ll T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		ll a[100][100], b[100][100] = { 0 };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == 1) {
					for (int i1 = 0; i1 < n; i1++) b[i1][j] = 1;
					for (int j1 = 0; j1 < m; j1++) b[i][j1] = 1;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cout << b[i][j] << " ";
			cout << endl;
		}

		cout << endl;
	}
	return 0;
}
