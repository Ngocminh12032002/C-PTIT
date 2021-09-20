#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string maSV,HoTen,Lop,NgaySinh;
    float GPA;
};

void nhap( SinhVien p[],int &n){
    for(int i=0;i<n;i++){
       if(i+1<10)  p[i].maSV="B20DCCN00"+to_string(i+1);
       else{ p[i].maSV="B20DCCN0"+to_string(i+1);}
       scanf("\n");
       getline(cin,p[i].HoTen);
       cin>>p[i].Lop;
       cin>>p[i].NgaySinh;
       cin>>p[i].GPA;
    }
}

void tach(string s)
{
    string p;
    int k = 0;
    if (s[1] == '/')
        s = "0" + s;
    for (int i = 0; i < s.length(); i++)
    {
        p[k++] = s[i];
        if (s[i] == '/' && s[i + 2] == '/')
            p[k++] = '0';
    }
    for (int i = 0; i < k; i++)
        cout << p[i];
    cout << " ";
}

void in( SinhVien p[],int &n){
    for(int i=0;i<n;i++){
         cout<<p[i].maSV<<" "<<p[i].HoTen<<" "<<p[i].Lop<<" ";
         tach(p[i].NgaySinh);
         cout<<" "<<fixed<<setprecision(2)<<p[i].GPA<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
