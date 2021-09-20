#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[10000], max = 0;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (a[i] >= max) max = a[i];
        }
        cout << max << endl;
    }

}
