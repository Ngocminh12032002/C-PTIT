#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100] = { 0 };
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            a[s[i]]++;
        for (int i = 0; i < s.length(); i++)
            if (a[s[i]] == 1)
                cout << s[i];
        cout << endl;
    }
    return 0;
}
