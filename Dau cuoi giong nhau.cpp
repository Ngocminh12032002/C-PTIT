#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int dem = 0;
        string s;
        cin >> s;
        int length = s.length();
        for (int i = 0; i < length; i++) {
            for (int j = length - 1; j >= i; j--) {
                if (s[i] == s[j]) dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
