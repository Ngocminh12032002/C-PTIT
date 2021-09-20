#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang[n];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        int i = n - 1;
        while (mang[i] > mang[i - 1]) i--;
        if (i > 0) {
            for (int k = n - 1; k >= i; k--) {
                if (mang[k] < mang[i - 1]) {
                    swap(mang[k], mang[i - 1]);
                    break;
                }
            }
            for (int k = i; k < i + (n - i) / 2; k++) {
                swap(mang[k], mang[n - 1 - k + i]);
            }
            for (int i = 0; i < n; i++) cout << mang[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
