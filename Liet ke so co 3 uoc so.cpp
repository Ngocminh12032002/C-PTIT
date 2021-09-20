#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(long n)
{

    if (n < 2)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        for (long i = 2; i <= sqrt(n); i++) {
            if (isPrime(i) == 1) {
                cout << i*i << " ";
            }
        }
        cout << endl;
    }
}
