#include<bits/stdc++.h>
using namespace std;

struct hang{
    int maMH;
    string ten,nhom;
    float giamua,giaban,loinhuan;
};

int main(){
    int n;
    cin>>n;
    struct hang list[n];
    for(int i=0;i<n;i++){
        list[i].maMH=i+1;
        scanf("\n");
        getline(cin,list[i].ten);
        scanf("\n");
        getline(cin,list[i].nhom);
        cin>>list[i].giamua>>list[i].giaban;
        list[i].loinhuan=list[i].giaban-list[i].giamua;
    }
    struct hang tg;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i].loinhuan<list[j].loinhuan){
                tg=list[i];
                list[i]=list[j];
                list[j]=tg;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<list[i].maMH<<" "<<list[i].ten<<" "<<list[i].nhom<<" "<<fixed<<setprecision(2)<<list[i].loinhuan<<endl;
    }
}
