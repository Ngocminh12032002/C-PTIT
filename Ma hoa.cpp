#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        map<char, int> m;
        ++m[s[0]];
        for (int i = 1; i < s.size(); i++) {
            m[s[i]]++;
            if (s[i] != s[i - 1]) {
                cout << s[i - 1] << m[s[i - 1]];
                m[s[i - 1]] = 0;
            }
        }
        cout << s[s.size() - 1] << m[s[s.size() - 1]] << endl;
    }

}

