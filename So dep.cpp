#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
bool Kiemtra(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] % 2 != 0) return 0;
    return 1;
}
bool Doixung(string s) {
    for (int i = 0; i <= s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i]) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        if (Kiemtra(s) == 1 && Doixung(s) == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
