#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;
class SinhVien
{
private:
    string hoTen, lop, ngaySinh;
    float diem;

public:
    SinhVien()
    {
        hoTen = "";
        lop = "";
        ngaySinh = "";
        diem = 0;
    }
    friend istream &operator>>(istream &in, SinhVien &sv)
    {
        getline(in, sv.hoTen);
        getline(in, sv.lop);
        getline(in, sv.ngaySinh);
        in >> sv.diem;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien &sv)
    {
        if (sv.ngaySinh[2] != '/')
        {
            sv.ngaySinh.insert(0, "0");
        }
        if (sv.ngaySinh[5] != '/')
        {
            sv.ngaySinh.insert(3, "0");
        }
        for (int i = 0; i < sv.hoTen.length(); i++)
        {
            sv.hoTen[i] = tolower(sv.hoTen[i]);
        }
        sv.hoTen[0] = toupper(sv.hoTen[0]);
        for (int i = 0; i < sv.hoTen.length(); i++)
        {
            if (sv.hoTen[i] == ' ')
            {
                sv.hoTen[i + 1] = toupper(sv.hoTen[i + 1]);
            }
        }
        out << "B20DCCN001"
            << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << setprecision(2) << fixed << sv.diem << endl;
        return out;
    }
};

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
