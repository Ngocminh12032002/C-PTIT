#include<iostream>
#include<string.h>
#include<vector>
#include <algorithm>
using namespace std;
int cmp(string a, string b) {
    string x = a + b;
    string y = b + a;
    return x > y ? 1 : 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        vector<string>mang(n);
        for (int i = 0; i < mang.size(); i++) {
            cin >> mang[i];
        }
        sort(mang.begin(), mang.end(), cmp);
        for (int i = 0; i < mang.size(); i++) cout << mang[i];
        cout << endl;
    }
}
