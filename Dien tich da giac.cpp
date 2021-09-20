#include<bits/stdc++.h>
using namespace std;

struct diem{
    double x,y;
};

void nhap(struct diem &p){
    cin>>p.x>>p.y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        struct diem list[n];
        for(int i=0;i<n;i++){
             nhap(list[i]);
        }
        double s=0.0;
        int j=n-1;
        for(int i=0;i<n;i++){
            s+=(list[j].x+list[i].x)*(list[j].y-list[i].y);
            j=i;
        }
        cout<<fixed<<setprecision(3)<<abs(s/2.0)<<endl;
    }
}
