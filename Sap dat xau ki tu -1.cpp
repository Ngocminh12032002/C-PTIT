#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
	int a[26] = { 0 };
	for (int i = 0; i < s.size(); i++) {
		a[s[i] - 'a']++;
	}
	int max = *max_element(a, a + 26);
	if (max - 1 <= s.length() - max) {
		return true;
	}
	return false;
}


int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		if (check(s)) cout << "1\n";
		else cout << "0\n";
	}
}
