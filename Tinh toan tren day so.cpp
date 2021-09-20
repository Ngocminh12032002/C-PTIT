#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl '\n';
const ll M = 1e9 + 7;
const ll S = 1e6 + 1;
ll a[62] = {};
ll gcd(ll a, ll b){
    ll tmp;
    while(b){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
ll luy_thua(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b % 2 == 0){
        ll s = luy_thua(a, b / 2);
        return s * s % M;
    }
    else {
        ll s = luy_thua(a, b - 1);
        return s * a % M; 
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        ll s = 1;
        int tmp = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            s *= a[i];
            s %= M; 
            tmp = gcd(a[i], tmp);
        }
        ll res = luy_thua(s, tmp);
        cout << res;
        cout << endl;
    }
    return 0;
}
