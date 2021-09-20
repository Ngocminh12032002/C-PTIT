#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	int t; cin >> t;
	while (t--) { 
		int n, dem = 0; cin >> n;
		long long a[100000]; 
		for (int i = 1; i <= n; i++) { 
			cin >> a[i];
			if (a[i] != 0) cout << a[i] << " "; 
			else dem++; 
		}
		for (int i = 1; i <= dem; i++) cout << "0" << " ";
		cout << endl; 
	}
}
