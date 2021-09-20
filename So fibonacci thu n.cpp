#include <iostream>
using namespace std;

long long f(long long n) {
    long long a1 = 1, a2 = 1;
    long long x;
    if (n < 3) return a1;
    else {
        for (int i = 2; i < n; i++) {
            x = a1 + a2;
            a1 = a2;
            a2 = x;
        }
        return x;
    }
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a;
        cin >> a;
        cout << f(a) << endl;
    }
}
