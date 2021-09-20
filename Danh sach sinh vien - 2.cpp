#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string ten, lop, tuoi;
    float gpa;
};
void sua(SinhVien &x)
{
    string tmp = "", b[100], y = "";
    int lim = 0;
    for (int i = 0; i < x.ten.length(); i++)
    {
        if (x.ten[i] != ' ')
        {
            tmp += x.ten[i];
        }
        else
        {
            if (tmp != "")
            {
                b[lim++] = tmp;
                tmp = "";
            }
        }
    }
    if (tmp != "")
        b[lim++] = tmp;
    for (int i = 0; i < lim; i++)
    {
        if (b[i][0] >= 'a' && b[i][0] <= 'z')
            b[i][0] -= 32;
        for (int j = 1; j < b[i].length(); j++)
        {
            if (b[i][j] >= 'A' && b[i][j] <= 'Z')
                b[i][j] += 32;
        }
        if (i != lim - 1)
        {
            y += b[i];
            y += " ";
        }
        else
        {
            y += b[i];
        }
    }
    x.ten = y;
}
void nhap(SinhVien ds[], int x)
{
    for (int i = 0; i < x; i++)
    {
        cin.ignore();
        getline(cin, ds[i].ten);
        cin >> ds[i].lop >> ds[i].tuoi >> ds[i].gpa;
        if (ds[i].tuoi[1] == '/')
            ds[i].tuoi = "0" + ds[i].tuoi;
        if (ds[i].tuoi[4] == '/')
            ds[i].tuoi.insert(3, "0");
    sua( ds[i]);
    }
}
void in(SinhVien ds[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (i < 9)
            cout << "B20DCCN00" << i + 1 << " ";
        else
            cout << "B20DCCN0" << i + 1 << " ";
        cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].tuoi << " ";
        printf("%.2f", ds[i].gpa);
        cout << endl;
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

