#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

int sum(int n)
{
    int d = 0;
    while (n != 0)
    {
        d += n % 10;
        n /= 10;
    }
    return d;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p=sum(n);
        if (isPrime(n))
            cout << "NO\n";
        else
        {
            int tong = 0;
            for (int i = 2; i <= n; i++){
                while(n%i==0){
                   tong+=sum(i);
                   n/=i;
                }
            }
            if(tong==p) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
