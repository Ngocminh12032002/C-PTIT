#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
string cmp(string a) {
    int dem = 1;
    for (int j = 0; j < a.length(); j++) {
        if (a[j] < a[j + 1]) dem++;
    }
    if (dem == a.length()) return "-1";
    int i = a.length() - 1;
    while (a[i] >= a[i - 1]) i--;
    int k = i;
    for (k = a.length() - 1; k >= i; k--) {
        if (a[k] < a[i - 1] && a[k] != a[k - 1]) {
            swap(a[k], a[i - 1]);
            break;
        }
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cout << cmp(s) << endl;
    }
}
