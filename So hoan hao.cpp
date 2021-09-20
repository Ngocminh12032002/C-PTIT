#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long a[7]={6,28,496,8128,33550336,8589869056,137438691328};
    while(t--){
        long long n;
        cin>>n;
        int dem=0;
        for(int i=0;i<7;i++){
             if(a[i]==n){
                 cout<<"1"<<endl;
                 dem++;
             }
             
        }
        
        if(dem==0) cout<<"0"<<endl;
    }
}
