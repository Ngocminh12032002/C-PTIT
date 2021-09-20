#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int a){
     if(a<2) return 0;
     else{
         for(int i=2;i<=sqrt(a);i++){
             if(a%i==0) return 0;
         }
     }
     return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dem=0;
        for(int i=2;i<=n/2;i++){
              if(isPrime(i)==1 && isPrime(n-i)==1){
                  cout<<i<<" "<<n-i<<endl;
                  dem++;
                  break;
              }
        }
        if(dem==0){
            cout<<"-1"<<endl;
        }
    }
}
