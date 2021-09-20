#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,a[100000];
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        int max=0;
        for(int i=0;i<n-1;i++)
        {
            int res=0;
            for(int j=n-1;j>=0;j--)
            {
                if(a[j]>a[i])
                {
                    res=j-i;
                    break;
                }
            }
            if(res>max) max=res;
        }
        cout << max << endl;
    }
}
