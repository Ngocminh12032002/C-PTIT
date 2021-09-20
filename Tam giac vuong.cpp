#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n';
const ll M = 1e9 + 7;
const ll S = 1e6 + 1;
ll a[5002] = {};
int Bsearch(ll a[], ll l, ll r, ll x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) return 1;
        else if (a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= a[i];
        }
        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll tmp = a[i] + a[j];
                if (Bsearch(a, j + 1, n - 1, tmp)) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
