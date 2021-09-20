#include <bits/stdc++.h>

using namespace std;
const int N = 15;
int a[N];
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size() + 1;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                if (a[j] == 0) {
                    int tt = 0;
                    if (j < n && s[j - 1] == 'D' && a[j + 1] == 0) tt = 1;
                    if (j > 1 && s[j - 2] == 'I' && a[j - 1] == 0) tt = 1;
                    if (tt == 0) {
                        a[j] = i;
                        break;
                    }
                }
        }
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << "\n";
    }
}
