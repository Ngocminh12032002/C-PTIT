#include<iostream>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long mang[n + 1], mang2[n + 1], mang3[n + 1], k = 0;
        for (long long i = 0; i < n; i++) {
            cin >> mang[i];
            mang2[i] = mang[i];
        }
        sort(mang2, mang2 + n);
        for (int i = 0; i < n; i++) {
            if (mang[i] != mang2[i]) mang3[k++] = i + 1;
        }
        cout << mang3[0] << " " << mang3[k - 1] << endl;
    }
    return 0;
}


