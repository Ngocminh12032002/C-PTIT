#include <iostream>
#include <math.h>
using namespace std;
int prime(int n) {
	if (n < 2) return 0;
	if (n == 2 || n == 3) return 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int gcd(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, dem = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (gcd(i, n) == 1) dem++;
		}
		if (prime(dem) == 1) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
