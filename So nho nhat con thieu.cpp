#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[100000];
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n - 1);
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1) {
                dem = a[i + 1] - 1;
                break;
            }
        }
        cout << dem << endl;
    }
}
