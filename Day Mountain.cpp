#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l,r;
        cin>>l>>r;
        int viTriMax=l,check=0;
        for(int i=l;i<=r;i++){
           if(a[viTriMax]<a[i]) viTriMax=i;
        }
        for(int i=l;i<viTriMax;i++){
            if(a[i]>a[i+1]) check++;
        }
        for(int i=viTriMax;i<r;i++){
            if(a[i]<a[i+1]) check++;
        }
        if(check!=0) cout<<"No\n";
        else cout<<"Yes\n";
    }
}
