#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        int dem=0;
        for(int i=1;i<=sqrt(a);i++){
            if(a%i==0){
                if(i%2==0){
                    dem++;
                }
                if((a/i)%2==0 && i!=(a/i)){
                    dem++;
                }
            }
        }
        cout<<dem<<endl;
    }
}
