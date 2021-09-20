#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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

struct SinhVien
{
    string masv, hoten, lop, ngaysinh;
    float gpa;
};

void nhap(struct SinhVien& p)
{
    p.masv = "B20DCCN001";
    getline(cin, p.hoten);
    getline(cin, p.lop);
    getline(cin, p.ngaysinh);
    cin >> p.gpa;
}

void in(struct SinhVien& p)
{
    cout << p.masv << " " << p.hoten << " " << p.lop << " ";
    tach(p.ngaysinh);
    cout << fixed << setprecision(2) << p.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
