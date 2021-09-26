#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
       string msv,hoten,lop,ngaysinh;
       float gpa;
    public:
       SinhVien(){
           msv=hoten=lop=ngaysinh="";
           gpa=0;
       }
       friend ostream &operator<<(ostream &out,SinhVien a);
       friend istream &operator>>(istream &in,SinhVien &a);
};

ostream &operator<<(ostream &out,SinhVien a){
    out<<a.msv<<" "<<a.hoten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
    return out;
}
int dem=0;
istream &operator>>(istream &in,SinhVien &a){
    dem++;
    if(dem<10) a.msv="B20DCCN00"+to_string(dem);
    if(dem>=10) a.msv="B20DCCN0"+to_string(dem); 
    scanf("\n");
    getline(cin,a.hoten);
    scanf("\n");
    cin>>a.lop;
    scanf("\n");
    cin>>a.ngaysinh;
    if(a.ngaysinh[2]!='/') a.ngaysinh="0"+a.ngaysinh;
    if(a.ngaysinh[5]!='/') a.ngaysinh.insert(3,"0");
    cin>>a.gpa;
    return in;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
