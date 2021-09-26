#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    string tmp;
    vector<string> list;
    while (ss >> tmp)
    {
        list.push_back(tmp);
    }
    string rong = "";
    for (auto x : list)
    {
        rong = rong + x + " ";
    }
    s = rong;
    s[0] = toupper(s[0]);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ' && s[i - 1] == ' ')
            s[i] = toupper(s[i]);
    }
    return s;
}
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
    friend istream &operator>>(istream &in, SinhVien &a);
    
};

ostream &operator<<(ostream &out, SinhVien a)
{
    out << a.msv << " " << chuanhoa(a.hoten) << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int dem = 0;
istream &operator>>(istream &in, SinhVien &a)
{
    dem++;
    if (dem < 10)
        a.msv = "B20DCCN00" + to_string(dem);
    if (dem >= 10)
        a.msv = "B20DCCN0" + to_string(dem);
    scanf("\n");
    getline(cin, a.hoten);
    scanf("\n");
    cin >> a.lop;
    scanf("\n");
    cin >> a.ngaysinh;
    if (a.ngaysinh[2] != '/')
        a.ngaysinh = "0" + a.ngaysinh;
    if (a.ngaysinh[5] != '/')
        a.ngaysinh.insert(3, "0");
    cin >> a.gpa;
    return in;
}

void sapxep(SinhVien list[],int N){
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(list[i].gpa<list[j].gpa) swap(list[i],list[j]);
            }
        }
    }
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
