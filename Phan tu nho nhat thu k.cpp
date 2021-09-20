#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a[1000];
        cin >> n >> k;
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
        cout << a[k - 1] << endl;
    }

}
