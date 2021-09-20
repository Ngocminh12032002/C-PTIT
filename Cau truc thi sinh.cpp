#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;
struct ThiSinh {
    string hoten, ngaysinh;
    double diem1, diem2, diem3, tongdiem;
};
void nhap(struct ThiSinh& x) {
    getline(cin, x.hoten);
    getline(cin, x.ngaysinh);
    cin >> x.diem1 >> x.diem2 >> x.diem3;
}
void in(struct ThiSinh& x)
{
    x.tongdiem = x.diem1 + x.diem2 + x.diem3;
    cout << x.hoten << " " << x.ngaysinh << " " << fixed << setprecision(1) << x.tongdiem;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
