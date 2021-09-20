#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[10000], mang[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mang[0] = 1;
        for (int i = 0; i < n; i++) {
            int max = 0;
            for (int j = 0; j < i; j++) {
                if (a[i] > a[j]) {
                    if (mang[j] > max) max = mang[j];
                }
            }
            mang[i] = max + 1;
        }
        sort(mang, mang + n);
        cout << mang[n - 1] << endl;
    }
    return 0;
}

