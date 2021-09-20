#include <iostream>
#include <math.h>
long long  a[1000006];
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long max;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0) max = a[0];
            else if (max < a[i])
                max = a[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] < 0)
            {
                sum = 0;
                continue;
            }
            sum += a[i];
            if (sum > max)
            {
                max = sum;
            }
        }
        cout << max << endl;
    }
    return 0;
}
