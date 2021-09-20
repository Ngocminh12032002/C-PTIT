#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
long long b = 1e9 + 7;
long long luythua(long long s1, long long a) {
    if (a == 0) return 1;
    if (a == 1) return s1;
    if (a % 2 == 0) {
        long long s = luythua(s1, a / 2);
        return s * s % b;
    }
    else {
        long long s = luythua(s1, a - 1);
        return (s1 * s) % b;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, x, sum = 0;
        cin >> a >> x;
        vector<long long>mang(a + 1);
        for (int i = a - 1; i >= 0; i--) {
            cin >> mang[i];
            sum += mang[i] * luythua(x, i);
        }
        cout << sum % b << endl;
    }
}
