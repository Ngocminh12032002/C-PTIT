#include <bits/stdc++.h>
using namespace std;
int kt(int b[],int l,int r,int x)
{
    int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(b[m]>x)
        {
            res=m;
            r=m-1;
        }
        else l=m+1;
    }
    return res;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
       for(int i=0;i<n;i++)
       {
           cin >> a[i];
           b[i]=a[i];
       }
       sort(b,b+n);
       for(int i=0;i<n;i++)
       {
          int x=kt(b,0,n-1,a[i]);
          if(x==-1) cout << "_ ";
          else cout << b[x] << " ";
       }
       cout << endl;
    }
    return 0;
}
