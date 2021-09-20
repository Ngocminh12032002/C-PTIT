#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        long long sumArray=0;
        for(int i=0;i<n;i++){
              cin>>a[i];
              sumArray+=a[i];
        }
        int check =-1;
        long long sumLeft=0;
        for(int i=0;i<n;i++){
            sumLeft+=a[i];
            if(sumLeft==(sumArray-sumLeft-a[i+1])) {
                check=i+2;
                break;
            }
        }
        cout<<check<<endl;
    }
}
