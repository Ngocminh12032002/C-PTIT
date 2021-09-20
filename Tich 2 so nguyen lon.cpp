#include <bits/stdc++.h>
using namespace std;

string mul(string s1, string s2) {
	vector<int> a, b;
	for (int i = 0; i < s1.size(); i++) {
		a.push_back(int(s1[i] - '0'));
	}
	for (int i = 0; i < s2.size(); i++) {
		b.push_back(int(s2[i] - '0'));
	}
	vector<vector<int> > res(s2.size());
	int k = 0;
	for (int i = s2.size() - 1; i >= 0; i--) {
		int t = 0;
		while (t < k) {
			res[k].push_back(0);
			t++;
		}
		int so = 0, nho = 0;
		for (int j = s1.size() - 1; j >= 0; j--) {
			so = a[j] * b[i] + nho;
			res[k].push_back(so % 10);
			nho = so / 10;
		}
		if (nho > 0) res[k].push_back(nho);
		while (res[k].size() < s1.size() + s2.size()) {
			res[k].push_back(0);
		}
		reverse(res[k].begin(), res[k].end());
		k++;
	}
	int nho = 0;
	string ans = "";
	for (int j = res[0].size() - 1; j >= 0; j--) {
		int so = nho;
		for (int i = 0; i < res.size(); i++) {
			so += res[i][j];
		}
		ans = char(so % 10 + '0') + ans;
		nho = so / 10;
	}
	if (nho > 0) ans = char(nho + '0') + ans;
	while (ans[0] == '0') ans.erase(ans.begin());
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		cout << mul(a, b) << endl;
	}
}
