#include <iostream>
using namespace std;

// ý tu?ng là tìm các s? t? 1  d?n p th?a mãn %p =1 sau dó tìm s? l?n nh?t trong kho?ng t? 1 d?n n có d?ng x+i*p r?i tính s? các s? t? x d?n x+i*p
long long findCountOfSolutions(long long n, long long p)
{
    long long ans = 0;
    for (long long x=1; x<p; x++)
    {
        if ((x*x)%p == 1)
        {
            long long last = x + p * (n/p);
            if (last > n)
                last -= p;
            ans += ((last-x)/p + 1);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, p;
        cin >> a >> p;
        cout<<findCountOfSolutions(a,p)<<endl;
    }
}
#include <iostream>
using namespace std;

long long findCountOfSolutions(long long n, long long p)
{
    long long ans = 0;
    for (long long x = 1; x < p; x++)
    {
        if ((x * x) % p == 1)
        {
            long long last = x + p * (n / p);
            if (last > n)
                last -= p;
            ans += ((last - x) / p + 1);
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, p;
        cin >> a >> p;
        cout << findCountOfSolutions(a, p) << endl;
    }
}
