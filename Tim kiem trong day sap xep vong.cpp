#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[100000], k, dem = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

        }
        for (int i = 0; i < n; i++) {
            dem++;
            if (a[i] == k) break;
        }

        cout << dem << endl;
    }
}
