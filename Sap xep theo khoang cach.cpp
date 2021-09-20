#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int mang[1000], mang2[1000], mang3[1000];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
            mang2[i] = abs(x - mang[i]);
        }
        sort(mang2, mang2 + n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mang2[j] == abs(x - mang[i])) {
                    mang3[j] = mang[i];
                    mang2[j] = -1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) cout << mang3[i] << " ";
        cout << endl;
    }
}
