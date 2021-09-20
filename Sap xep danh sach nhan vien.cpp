#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
struct NhanVien
{
    int mnv;
    string ngay, thang, nam;
    string ten, gt, tuoi, diachi, mst, date;
};
bool cmp(NhanVien x, NhanVien y)
{
    if (x.nam == y.nam && x.thang == y.thang)
        return x.ngay < y.ngay;
    if (x.nam == y.nam)
        return x.thang < y.thang;
    return x.nam < y.nam;
}
void chuanhoa(NhanVien& a) {
    if (a.tuoi[1] == '/') a.tuoi = "0" + a.tuoi;
    if (a.tuoi[4] == '/') a.tuoi.insert(3, "0");
    if (a.date[1] == '/') a.date = "0" + a.date;
    if (a.date[4] == '/') a.date.insert(3, "0");
}
void nhap(NhanVien& x)
{
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.gt >> x.tuoi;
    cin.ignore();
    getline(cin, x.diachi);
    cin >> x.mst >> x.date;
    chuanhoa(x);
    x.ngay = ""; x.thang = ""; x.nam = "";
    x.ngay += x.tuoi[3]; x.ngay += x.tuoi[4];
    x.thang += x.tuoi[0]; x.thang += x.tuoi[1];
    x.nam += x.tuoi[6]; x.nam += x.tuoi[7]; x.nam += x.tuoi[8];  x.nam += x.tuoi[9];
}
void sapxep(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
        ds[i].mnv = i + 1;
    sort(ds, ds + n, cmp);
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].mnv > 9)
            cout << "000" << ds[i].mnv << " ";
        else
            cout << "0000" << ds[i].mnv << " ";
        cout << ds[i].ten << " " << ds[i].gt << " " << ds[i].tuoi << " ";
        cout << ds[i].diachi << " " << ds[i].mst << " " << ds[i].date;
        cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
