#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int hang, cot, p;
        cin >> hang >> cot >> p;
        long long mang[1000][1000], mang2[hang * cot + 100];
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) {
                cin >> mang[i][j];
            }
        }
        int dem = 0, x = 0;
        for (int k = 0; k < hang / 2 + 1; k++) {
            for (int i = k; i < cot - k; i++) {
                if (dem == hang * cot) break;
                mang2[x++] = mang[k][i];
                dem++;
            }
            for (int i = k + 1; i < hang - k; i++) {
                if (dem == hang * cot) break;
                mang2[x++] = mang[i][cot - 1 - k];
                dem++;
            }
            for (int i = cot - 2 - k; i >= k; i--) {
                if (dem == hang * cot) break;
                mang2[x++] = mang[hang - 1 - k][i];
                dem++;
            }
            for (int i = hang - 2 - k; i >= k + 1; i--) {
                if (dem == hang * cot) break;
                mang2[x++] = mang[i][k];
                dem++;
            }
        }
        cout << mang2[p - 1] << endl;
    }
    return 0;
}

