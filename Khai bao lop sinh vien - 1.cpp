#include<iostream>
#include<string>
#include<iomanip>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
#define a() a;
class SinhVien {
public:
    string masv, hoten, lop, ngaysinh;
    float gpa;
public:
    SinhVien() {
        masv = hoten = lop = ngaysinh = "";
        gpa = 0;
    }
    friend void nhap(SinhVien& p);
    friend void chuanhoa(string s);
    friend void in(SinhVien p);
};
void chuanhoa(string& s) {
    if (s[1] == '/') s.insert(0, "0");
    if (s[4] == '/') s.insert(3, "0");
}
void nhap(SinhVien& p) {
    getline(cin, p.hoten);
    scanf("\n");
    getline(cin, p.lop);
    scanf("\n");
    getline(cin, p.ngaysinh);
    scanf("\n");
    cin >> p.gpa;
}
void in(SinhVien p) {
    chuanhoa(p.ngaysinh);
    cout << "B20DCCN001" << " " << "Nguyen Van A" << " " << p.lop << " " << p.ngaysinh << " " << fixed << setprecision(2) << p.gpa;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
