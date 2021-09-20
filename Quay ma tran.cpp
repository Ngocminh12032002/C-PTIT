#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int hang, cot;
        cin >> hang >> cot;
        int a[hang][cot], b[hang][cot];
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) {
                cin >> a[i][j];
                b[i][j] = 0;
            }
        }
        int dem = 0;
        for (int k = 0; k < cot / 2; k++) {
            for (int i = k + 1; i < cot - k; i++) {
                b[k][i] = a[k][i - 1];
            }
            for (int i = k + 1; i < hang - k; i++) {
                b[i][cot - 1 - k] = a[i - 1][cot - 1 - k];
            }
            for (int i = cot - 2 - k; i >= k; i--) {
                b[hang - 1 - k][i] = a[hang - 1 - k][i + 1];
            }
            for (int i = hang - 2 - k; i >= k; i--) {
                b[i][k] = a[i + 1][k];
            }
        }
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) {
                if (b[i][j] == 0) b[i][j] = a[i][j];
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
