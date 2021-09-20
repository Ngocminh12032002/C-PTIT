#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        int dem = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int c[256] = { 0 };
            int sum = 0;
            for (int j = i; j < s.length(); j++)
            {
                if (c[s[j]] == 0)
                {
                    sum++;
                }
                if (sum == k) dem++;
                if (sum > k) break;
                c[s[j]] = 1;
            }
        }
        cout << dem << endl;
    }
}
