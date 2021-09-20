#include <iostream>
#include<string>
using namespace std;
int Kiemtra(long long n, long long k) {
	long long s = 0;
	for (int i = 1; i <= n; i++) {
		s += i % k;
	}
	if (s == k) return 1;
	return 0;
}
int main() { 
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		cout << Kiemtra(n, k);
		cout << endl;
	}
	return 0; 
}
