#include <bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (prime(n) == 1)
            cout << n;
        else
        {
            while (n % 2 == 0)
            {
                cout << 2 << " ";
                n /= 2;
            }
            for (int i = 3; i * i <= n; i += 2)
            {
                while (n % i == 0)
                {
                    cout << i << " ";
                    n /= i;
                }
            }
            if (n != 1)
                cout << n;
        }
        cout << endl;
    }
    return 0;
}
