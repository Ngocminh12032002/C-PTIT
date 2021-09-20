#include<iostream>
#include<algorithm>
long long mang[100000], dp[100000] = { 0 };
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        dp[0] = mang[0];
        dp[1] = max(mang[1], mang[0]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 2] + mang[i], dp[i - 1]);
        }
        cout << dp[n - 1] << endl;
    }
}
