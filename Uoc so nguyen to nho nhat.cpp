#include<iostream>
#include<math.h>
using namespace std;
int prime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (i == 1) cout << 1 << " ";
			else if (prime(i) == 1) cout << i << " ";
			else if (i % 2 == 0) cout << 2 << " ";
			else {
				for (int j = 3; j <= sqrt(i); j += 2) {
					if (i % j == 0) {
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
}
