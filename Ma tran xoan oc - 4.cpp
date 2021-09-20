#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, p = 0;
    cin >> n;
    long long mang[1000][1000], mang2[n * n + 100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mang[i][j];
            mang2[p++] = mang[i][j];
        }
    }
    sort(mang2, mang2 + p);
    int dem = 0, x = 0;
    for (int k = 0; k < n / 2 + 1; k++) {
        for (int i = k; i < n - k; i++) {
            if (dem == n * n) break;
            mang[k][i] = mang2[x++];
            dem++;
        }
        for (int i = k + 1; i < n - k; i++) {
            if (dem == n * n) break;
            mang[i][n - 1 - k] = mang2[x++];
            dem++;
        }
        for (int i = n - 2 - k; i >= k; i--) {
            if (dem == n * n) break;
            mang[n - 1 - k][i] = mang2[x++];
            dem++;
        }
        for (int i = n - 2 - k; i >= k + 1; i--) {
            if (dem == n * n) break;
            mang[i][k] = mang2[x++];
            dem++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mang[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

