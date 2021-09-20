#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a[10000], j = 0, b[10000], k = 0;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if (n % 2 == 0) {
            for (int i = 0; i <= n / 2; i++) {
                b[k] = a[i];
                k += 2;
            }
            k = 1;
            for (int i = n / 2, p = 1; i < n; i++) {
                b[k] = a[i];
                k += 2;
            }
        }
        else {
            while (j <= n / 2 + 1) {
                b[k] = a[j];
                k += 2;
                j++;
            }
            k = 1;
            j--;
            while (j < n) {
                b[k] = a[j];
                k += 2;
                j++;
            }
        }
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}
