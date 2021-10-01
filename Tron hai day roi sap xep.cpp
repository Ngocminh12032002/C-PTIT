#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int d=m+n;
        int c[d];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<d;i++){
            if(i<n){
                c[i]=a[i];
            }
            else{
                c[i]=b[i-n];
            }
        }
        int tg;
        for(int i=0;i<d;i++){
            for(int j=i+1;j<d;j++){
                if(c[i]>c[j]){
                    tg=c[i];
                    c[i]=c[j];
                    c[j]=tg;
                }
            }
        }
        for(int i=0;i<d;i++){
               cout<<c[i]<< " ";
        }
        cout<<endl;
    }
}
