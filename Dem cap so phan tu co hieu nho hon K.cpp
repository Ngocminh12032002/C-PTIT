#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long dem=0;
        for(int i=0;i<n;i++){
            int tg=a[i]+k;
            int chiSo=lower_bound(a,a+n,tg)-a; // tìm ch? s? c?a s? d?u tiên l?n hon ho?c b?ng a[i]+k

            int c=chiSo-i-1;    //tính s? c?p s? trong kho?ng t? ch? s? i d?n <chiSo
            if(c>=1) dem+=c;
        }
        cout<<dem<<endl;
    }
}
