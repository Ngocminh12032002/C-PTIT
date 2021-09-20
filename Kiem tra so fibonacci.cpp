#include <iostream> 
using namespace std; 
int main() {
	int t; cin >> t; 
	while (t--) { 
		long long n; cin >> n; 
		if (n == 0 || n == 1) { 
			cout << "YES" << endl;
			continue;
		} 
		long long fn = 1, f1 = 1, f0 = 0; 
		while (fn < n) {
			fn = f0 + f1; f0 = f1; f1 = fn; 
		} 
		if (fn == n) cout << "YES" << endl; else cout << "NO" << endl; 
	}
	return 0;
}
