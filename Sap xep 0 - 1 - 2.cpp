#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) { 
		long long n; cin >> n; 
		long long a[n + 2]; 
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n); 
		for (int i = 0; i < n; i++) cout << a[i] << ' '; 
		cout << endl; 
	}
}
