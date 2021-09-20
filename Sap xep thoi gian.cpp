#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll M = 1e9 + 7;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

struct time {
	int gio, phut, giay;
};

bool cmp(struct time a, struct time b) {
	if (a.gio == b.gio && a.phut == b.phut)
		return a.giay < b.giay;
	else if (a.gio == b.gio)
		return a.phut < b.phut;
	else return a.gio < b.gio;
}
int main()
{
	faster();
	int t; cin >> t;
	struct time a[t + 1];
	for (int i = 0; i < t; i++)
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
	sort(a, a + t, cmp);
	for (int i = 0; i < t; i++)
		cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
	return 0;
}
