#include <iostream>
#include <math.h>
#include <stdlib.h>
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
        int n, k, dem = 0, i = 1, danhdau=0;
        cin >> n >> k;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                dem++;
                n /= i;
                if (dem == k) {
                    cout << i;
                 
                    danhdau = 1;
                    break;
                }
            }
        }
        if (danhdau==0) cout << -1;
        cout << endl;
    }
    return 0;
}
