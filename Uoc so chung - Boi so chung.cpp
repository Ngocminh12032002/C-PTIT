
#include <iostream>
using namespace std;
long gcd(long a, long b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
        return a;
}
long lcm(long a, long b) {
        return a * b / gcd(a, b);
    }
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " ";
        cout << gcd(a, b) << endl;

    }
    return 0;
}

