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
 
int n, m, a[505][505];
 
int max_area(int x[]){
	int res = 0;
	int i = 0;
	stack<int> st;
	while(i < m){
		if(st.empty() || x[i] >= x[st.top()]) st.push(i++);
		else{
			int top = st.top(); st.pop();
			if(st.empty()){
				res = max(res, i * x[top]);
			}
			else{
				res = max(res, x[top]* (i - st.top() - 1));
			}
		}
	}
	while(!st.empty()){
		int top = st.top(); st.pop();
		if(st.empty()){
			res = max(res, i * x[top]);
		}
		else{
			res = max(res, x[top] * (i - st.top() - 1));
		}
	}
	return res;
}
 
 
void solve(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cin >> a[i][j];
	}
	int tmp[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0) tmp[i][j] = a[i][j];
			else if(a[i][j]){
				tmp[i][j] = tmp[i - 1][j] + 1;
			}
			else tmp[i][j] = 0;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, max_area(tmp[i]));
	}
	cout << ans << endl;
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
