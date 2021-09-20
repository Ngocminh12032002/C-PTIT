#include<iostream>
#include<math.h>
using namespace std;

long long isPrime(long long n){
    if(n<2) return 0;
    else{
        for(long long i=2;i<=sqrt(n);i++){
            if(n%i==0) return 0;
        }
    }

    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        if(l<r){
            long long dem=0;
            
            for(long long i=l;i*i<=r;i++)
            {
                if(isPrime(i) && i*i<=r) dem++;
            }
            cout<<dem<<endl;
        }
        if(l>r){
            long long dem=0;
            
            for(long long i=r;i*i<=l;i++)
            {
                if(isPrime(i) && i*i<=l) dem++;
            }
            cout<<dem<<endl;
        }
        

    }
}
