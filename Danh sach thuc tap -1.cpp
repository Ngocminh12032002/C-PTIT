#include <bits/stdc++.h>
using namespace std;

struct sinhVien{
    int stt;
    string msv,hoten,lop,email,doanhnghiep;
};

void nhap(struct sinhVien &p){
    cin>>p.msv;
    scanf("\n");
    getline(cin,p.hoten);
    cin>>p.lop;
    cin>>p.email;
    cin>>p.doanhnghiep;
}

int main(){
    int n;
    cin>>n;
    struct sinhVien list[n];
    for(int i=0;i<n;i++){
        list[i].stt=i+1;
        nhap(list[i]);
    }
    int t;
    cin>>t;
    if(t<=5){
        while(t--){
        string s;
        cin>>s;
        int c=0;
        struct sinhVien res[100];
        for(int i=0;i<n;i++){
            if(list[i].doanhnghiep==s){
                 res[c]=list[i];c++;
            }
        }
        struct sinhVien tg;
        for(int i=0;i<c;i++){
            for(int j=i+1;j<c;j++){
                if(res[i].hoten>res[j].hoten){
                    tg=res[i];
                    res[i]=res[j];
                    res[j]=tg;
                }
            }
        }
        for(int i=0;i<c;i++){
            cout<<res[i].stt<<" "<<res[i].msv<<" "<<res[i].hoten<<" "<<res[i].lop<<" "<<res[i].email<<" "<<res[i].doanhnghiep<<endl;
        }
    }
    }
}
