#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
#define ll long long
int main() {
	ll T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		ll a[100][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) cin >> a[i][j];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)	cout << a[i][j] << " ";
				else cout << "  ";
			}
			cout << endl;
		}

		cout << endl;
	}
	return 0;
}
