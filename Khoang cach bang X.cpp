#include<iostream>
#include<algorithm>
using namespace std;
int kiemtra(int mang[], int n, int x) {
    int kt[100000] = { 0 };
    for (int i = 0; i < n; i++) {
        kt[mang[i]]++;
    }
    sort(mang, mang + n);
    if (mang[n - 1] - mang[0] < x) return 0;
    for (int i = 0; i < n; i++) {
        if (kt[x + mang[i]] != 0) {
            return 1;
            break;
        }
    }
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int mang[n];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        if (kiemtra(mang, n, x) == 1) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
