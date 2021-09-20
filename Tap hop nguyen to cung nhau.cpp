#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return a%b==0?b:gcd(b,a%b);
}

long long coprime(long long n,long long m){
    long long tong = n*(n+1)/2+m;
    if(tong%2==0){
        long long s1 = tong/2;
        long long s2 = s1-m;
        if(gcd(s1,s2)==1) return 1;
        else return 0;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        if(coprime(n,m)==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
