#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
long long GCD(long long a, long long b) {
	return a % b == 0 ? b : GCD(b, a % b);
}
class PhanSo {
private:
	long long tuso, mauso;
public:
	PhanSo(long long tuso, long long mauso) {
		this->tuso = tuso;
		this->mauso = mauso;
	}
	void rutgon() {
		long long ucln = GCD(tuso, mauso);
		tuso /= ucln;
		mauso /= ucln;
	}
	friend istream& operator>>(istream& cin, PhanSo& phanso) {
		cin >> phanso.tuso >> phanso.mauso;
		return cin;
	}
	friend ostream& operator<<(ostream& cout, PhanSo& phanso) {
		cout << phanso.tuso << "/" << phanso.mauso << endl;
		return cout;
	}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
