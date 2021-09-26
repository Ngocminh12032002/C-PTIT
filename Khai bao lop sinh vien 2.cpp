#include <bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien
{
public:
    string msv, hoten, lop, ngaysinh;
    float gpa;

public:
    SinhVien()
    {
        msv = hoten = lop = ngaysinh = "";
        gpa = 0;
    }
    friend ostream &operator<<(ostream &out, SinhVien a);
    friend istream &operator>>(istream &in, SinhVien &);
};

ostream &operator<<(ostream &out, SinhVien a)
{
    out << a.msv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

istream &operator>>(istream &in, SinhVien &a)
{
    a.msv = "B20DCCN001";
    getline(in, a.hoten);
    in >> a.lop >> a.ngaysinh >> a.gpa;
    if (a.ngaysinh[2] != '/')
        a.ngaysinh = "0" + a.ngaysinh;
    if (a.ngaysinh[5] != '/')
        a.ngaysinh.insert(3, "0");
    return in;
}

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
