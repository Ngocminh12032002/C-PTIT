#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int check[10];
        for (int i = '0'; i <= '9'; i++)
            check[i] = 0;
        int demtu = 0;
        if(s[0]=='0') {demtu++;}
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < '0' || s[i] > '9')
            {
                demtu++;
                break;
            }
            else
            {
                check[s[i]] = 1;
            }
        }
        if (demtu != 0)
        {
            cout << "INVALID\n";
        }
        else
        {
            int dem = 0;
            for (int i = '0'; i <= '9'; i++)
            {
                if (check[i] == 0)
                    dem++;
            }
            if (dem == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
