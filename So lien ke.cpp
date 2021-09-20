#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int kiemtra(long long n) {
    int m, p;
    m = n % 10;
    n /= 10;
    while (n > 0) {
        p = n % 10;
        if (abs(m - p) != 1) return 0;
        m = p;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (kiemtra(n) == 0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
