#include<iostream>
#include<math.h>
using namespace std;
long long min(long long n) {
    long long p, s = 0, n1, dem = 0, k;
    n1 = n;
    while (n1 != 0) {
        n1 /= 10;
        dem++;
    }
    dem--;
    while (dem + 1 != 0) {
        k = pow(10, dem);
        p = n / k;
        if (p == 6) p = 5;
        s = s * 10 + p;
        n %= k;
        dem--;
    }
    return s;
}
long long max(long long n) {
    long long p, s = 0, n1, dem = 0, k;
    n1 = n;
    while (n1 != 0) {
        n1 /= 10;
        dem++;
    }
    dem--;
    while (dem + 1 != 0) {
        k = pow(10, dem);
        p = n / k;
        if (p == 5) p = 6;
        s = s * 10 + p;
        n %= k;
        dem--;
    }
    return s;
}
int main() {
    int  t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << min(a) + min(b) << " " << max(a) + max(b) << endl;
    }
    return 0;
}

