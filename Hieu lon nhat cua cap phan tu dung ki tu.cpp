#include <iostream>
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
        int min = a[1]-a[0];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(min< a[j]-a[i]) min=a[j]-a[i];
            }
        }
        if(min>0) cout<<min<<endl;
        else cout<<"-1"<<endl;
    }
}
