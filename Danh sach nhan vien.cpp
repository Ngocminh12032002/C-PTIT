#include<iostream>
#include<string>
using namespace std;
struct NhanVien {
    string ten, gioitinh, ngaysinh, diachi, mathue, ngayky;
};
int dem = 0;
void nhap(struct NhanVien& a) {
    if (dem == 0) cin.ignore();
    getline(cin, a.ten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.mathue);
    getline(cin, a.ngayky);
    dem++;
}
void inds(struct NhanVien a[100], int n) {
    for (int i = 0; i < n; i++) {
        if (i + 1 < 10) cout << "0000" << i + 1;
        else cout << "000" << i + 1;
        cout << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ngaysinh << " " << a[i].diachi << " " << a[i].mathue << " " << a[i].ngayky << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
