#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[1000];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int swap = a[i];
                    a[i] = a[j];
                    a[j] = swap;
                }
            }
        }
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1) dem += a[i + 1] - a[i] - 1;
        }
        cout << dem << endl;
    }
}
