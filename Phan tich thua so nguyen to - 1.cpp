#include <iostream>
#include <math.h>
using namespace std;
int prime(int n)
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
        int n,dem=0;
        cin >> n;
        if (prime(n) == 1) cout << n << " "<< 1;
        else {
            if (n % 2 == 0) {
                while (n % 2 == 0) {
                    dem++;
                    n /= 2;
                }
                cout << 2 << " " << dem <<" ";
                dem = 0;
            }
            int m = n;
            for (int i = 3; i <= n; i+=2) {
                while (n % i == 0) {
                    dem++;
                    n /= i;
                }
                if (m % i == 0) {
                    cout << i << " " << dem << " ";
                }
                m = n;
                dem = 0;
            }
           
        }
        cout << endl;
    }
    return 0;
}
