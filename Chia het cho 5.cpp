#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length() / 2; i++) {
            char temp = s[i];
            s[i] = s[s.length() - 1 - i];
            s[s.length() - 1 - i] = temp;
        }
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                if (i % 4 == 1) sum += 2;
                else if (i % 4 == 3) sum += 3;
                else if (i % 4 == 2) sum += 4;
                else sum += 1;
            }
        }
        if (sum % 5 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
