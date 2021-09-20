#include <bits/stdc++.h>

using namespace std;
map<int, int> mp;
int n, a[1000001];
bool cmp(int a, int b)
{
    if (mp[a] != mp[b])
    {
        return mp[a] > mp[b];
    }
    else
    {
        return a < b;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        mp.clear();
        cout << endl;
    }
}
