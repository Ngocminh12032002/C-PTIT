#include <iostream>
#include <algorithm>
using namespace std;
long long mang2[1000000];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        int mang[n], kt[10] = { 0 };
        for (int i = 0; i < n; i++) cin >> mang[i];
        for (int i = 0; i < n; i++) {
            while (mang[i] != 0) {
                int p = mang[i] % 10;
                mang2[k++] = p;
                kt[p]++;
                mang[i] /= 10;
            }
        }
        sort(mang2, mang2 + k);
        for (int i = 0; i < k; i++) {
            if (kt[mang2[i]] != 0) {
                cout << mang2[i] << " ";
                kt[mang2[i]] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}
