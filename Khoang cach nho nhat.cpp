#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) { 
		int n; cin >> n; 
		int x; 
		vector<int> v;
		for (int i = 0; i < n; i++) { 
			cin >> x; v.push_back(x); 
		} 
		sort(v.begin(), v.end()); 
		int minRes = v[1] - v[0];
		for (int i = 1; i < n - 1; i++) { 
			int tmp = v[i + 1] - v[i]; minRes = min(minRes, tmp);
		}
		cout << minRes << endl;
	} 
}
