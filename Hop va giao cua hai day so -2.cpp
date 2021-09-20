#include<iostream>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m;
        cin >> n >> m;
        int mang[n + m];
        set<long long> mang1;
        for (int i = 0; i < n + m; i++) {
            cin >> mang[i];
        }
        sort(mang, mang + n + m);
        set<long long> it;
        for (int i = 0; i < n + m; i++) mang1.insert(mang[i]);
        for (std::set<long long>::iterator it = mang1.begin(); it != mang1.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
        for (int i = 0; i < m + n; i++) {
            if (mang[i] == mang[i - 1]) cout << mang[i] << " ";
        }
        cout << endl;
    }
    return 0;
}


