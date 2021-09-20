#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
void solve(){
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i = 0; i < m; i++) cin >> b[i];
	auto it = unique(b.begin(), b.end());
	b.resize(it - b.begin());
	for(int x : b){
		for(int j = 0; j < mp[x]; j++){
			cout << x << " ";
		}
		mp.erase(x);
	}
	for(auto it : mp){
		for(int j = 0; j < it.second; j++){
			cout << it.fi << " ";
		}
	}
	cout << endl;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int TC; cin >> TC;
	while(TC--){
		solve();
	}
	return 0;
}
