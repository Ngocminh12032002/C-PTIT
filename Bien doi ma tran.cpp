#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang[n][n];
        long long sum = 0, sum2 = 0, mang2[n], mang3[n], sum3 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mang[i][j];
                sum += mang[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            sum2 = 0; sum3 = 0;
            for (int j = 0; j < n; j++) {
                sum2 += mang[i][j];
                sum3 += mang[j][i];

            }
            mang2[i] = sum2;
            mang3[i] = sum3;
        }
        sort(mang2, mang2 + n);
        sort(mang3, mang3 + n);
        cout << max(mang2[n - 1] * n - sum, mang3[n - 1] * n - sum) << endl;
    }
    return 0;
}
