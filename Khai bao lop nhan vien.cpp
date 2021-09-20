#include<bits/stdc++.h>
using namespace std;
#define a() a;
class NhanVien {
public:
	string mnv, name, gt, ns, dc, mst, nk;
	friend istream& operator >> (istream&, NhanVien&);
	friend ostream& operator << (ostream&, NhanVien);
};
void chuanhoa(string& s) {
	if (s[1] == '/') s.insert(0, "0");
	if (s[4] == '/') s.insert(3, "0");
}

istream& operator >> (istream& input, NhanVien& a) {
	a.mnv = "00001";
	getline(input, a.name);
	scanf("\n");
	getline(input, a.gt);
	scanf("\n");
	getline(input, a.ns);
	scanf("\n");
	getline(input, a.dc);
	scanf("\n");
	getline(input, a.mst);
	scanf("\n");
	getline(input, a.nk);
	return input;
}
ostream& operator << (ostream& output, NhanVien a) {
	output << a.mnv << " " << a.name << " " << a.gt << " ";
	chuanhoa(a.ns);
	output << a.ns << " " << a.dc << " " << a.mst << " ";
	chuanhoa(a.nk);
	output << a.nk;
	return output;
}
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
