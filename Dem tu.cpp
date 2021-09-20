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
        string s;
        getline(cin, s);
        int word = 0;
        if (s[0] != ' ' && s[0] != '\t' && s[0] != '\n') word++;
        for (int i = 0; s[i] != '\0'; i++)
            if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
                if (s[i + 1] != ' ' && s[i + 1] != '\t' && s[i + 1] != '\n')
                    word++;
        cout << word << endl;
    }
    return 0;
}
