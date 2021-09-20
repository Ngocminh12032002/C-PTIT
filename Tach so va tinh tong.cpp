#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int sum = 0;
		char tmp;
		for (int i = 0; i < s.size(); i++) {
			for (int j = i + 1; j < s.size(); j++) {
				if (s[i] > s[j]) {
					tmp = s[i];
					s[i] = s[j];
					s[j] = tmp;
				}
			}
		}
		for (int i = 0; i < s.size(); i++) {
			if (s[i] < 48 || s[i]>57) {
				cout << s[i];
			}
			else {
				sum += s[i] - '0';
			}
		}
		cout << sum << endl;
	}
}
