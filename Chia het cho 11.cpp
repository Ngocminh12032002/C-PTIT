#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int tongchan = 0, tongle = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (i % 2 == 0) tongchan += s[i] - '0';
			else tongle += s[i] - '0';
		}
		int hieu = tongle - tongchan;
		if (hieu % 11 == 0) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}
