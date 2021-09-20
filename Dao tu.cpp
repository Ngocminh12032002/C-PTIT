#include <sstream>
#include <iostream>
#include <string.h>
#include <vector>
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
        string token = "";
        vector<string> temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != 32) token += s[i];
            else {
                temp.push_back(token);
                temp.push_back(" ");
                token = "";
            }
        }
        temp.push_back(token);
        for (int i = temp.size() - 1; i >= 0; i--)
            cout << temp[i];
        cout << endl;
    }
}

