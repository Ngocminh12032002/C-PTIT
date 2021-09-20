#include<iostream>
#include<string>
using namespace std;

struct NhanVien {
    string ma, hoten, gioitinh, ngaysinh, diachi, masothue, ngayky;
};

void nhap(struct NhanVien& p) {
    p.ma = "00001";
    getline(cin, p.hoten);
    getline(cin, p.gioitinh);
    getline(cin, p.ngaysinh);
    getline(cin, p.diachi);
    getline(cin, p.masothue);
    getline(cin, p.ngayky);
}

void in(struct NhanVien& p) {
    cout << p.ma << " " << p.hoten << " " << p.gioitinh << " " << p.ngaysinh << " " << p.diachi << " " << p.masothue << " " << p.ngayky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
