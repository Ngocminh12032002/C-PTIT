#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, k1;
		cin >> n;
		long long a[100000];
		for (int i = 0; i < n; i++) cin >> a[i];
		int min = abs(a[0] + a[1]);
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(a[i] + a[j]) < min) {
					min = abs(a[i] + a[j]);
					k = i;
					k1 = j;
				}
			}
		}
		cout << a[k] + a[k1];
		cout << endl;
	}
}
