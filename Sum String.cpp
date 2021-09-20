#include<bits/stdc++.h>
using namespace std;

string cong(string a, string b) {
	if (a.size() < b.size()) {
		swap(a, b);
	}
	int n = a.size(), m = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(n - m, '0');
	string res = "";
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		int tmp1 = (a[i] - '0') + (b[i] - '0') + tmp;
		res += (char)(tmp1 % 10 + '0');
		tmp = tmp1 /= 10;
	}
	if (tmp) res += (char)(tmp + '0');
	reverse(res.begin(), res.end());
	return res;
}
bool kt(string s, int l, int len1, int len2) {
	string s1 = s.substr(l, len1);
	string s2 = s.substr(l + len1, len2);
	string s3 = cong(s1, s2);
	if (s3.size() > (s.size() - s1.size() - s2.size() - l)) return false;
	if (s3 == s.substr(l + len1 + len2, s3.size())) {
		if (s.size() == l + len1 + len2 + s3.size()) {
			return true;
		}
		return kt(s, l + len1, len2, s3.size());
	}
	return false;
}
void solve() {
	string s;
	cin >> s;
	for (int i = 1; i < s.size(); i++) {
		for (int j = 1; j <= s.size() - i; j++) {
			if (kt(s, 0, i, j)) {
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
