#include<iostream>
#include<string.h>
using namespace std;
long long so(string s) {
    long long sum = 0;
    while (1) {
        sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        if (sum < 10) break;
    }
    if (sum == 9) return 1;
    else return 0;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        if (so(s) == 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
