#include<iostream>
#include<string>
using namespace std;
int tang(int n) {
    while (n > 9) {
        int p = n % 10;
        if (p <= n / 10 % 10) return 0;
        n /= 10;
    }
    return 1;
}
int bien(string s) {
    string a;
    for (int i = 5; i < s.length(); i++) {
        if (s[i] != '.') a += s[i];
    }
    int k = stoi(a), dem = 0;
    if (k % 11111 == 0 || (k % 100 % 11 == 0 && k / 100 % 111 == 0)) return 1;
    if (tang(k) == 1) return 1;
    while (k != 0) {
        int p = k % 10;
        if (p == 6 || p == 8) dem++;;
        k /= 10;
    }
    if (dem == 5) return 1;
    return 0;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (bien(s) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

