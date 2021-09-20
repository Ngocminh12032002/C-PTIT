#include<bits/stdc++.h>
using namespace std;


long long GCD(long long a,long long b){
    return a%b==0?b:GCD(b,a%b);
}

long long LCM(long long a,long long b){
    return a*b/GCD(a,b);
}
struct PhanSo
{
    long long tu,mau;
};

void process(struct PhanSo &p,struct PhanSo &q){
    long long bcnn = LCM(p.mau,q.mau);
    struct PhanSo tong;
    tong.tu=p.tu*(bcnn/p.mau)+q.tu*(bcnn/q.mau);
    tong.mau=bcnn;
    long long ucln=GCD(tong.tu,tong.mau);
    tong.tu=tong.tu/ucln;
    tong.mau=tong.mau/ucln;
    struct PhanSo c;
    c.tu=tong.tu*tong.tu/GCD(tong.tu*tong.tu,tong.mau*tong.mau);
    c.mau=tong.mau*tong.mau/GCD(tong.tu*tong.tu,tong.mau*tong.mau);
    cout<<c.tu<<"/"<<c.mau<<" ";
    struct PhanSo D;
    D.tu=p.tu*q.tu*c.tu/GCD(p.tu*q.tu*c.tu,p.mau*q.mau*c.mau);
    D.mau=p.mau*q.mau*c.mau/GCD(p.tu*q.tu*c.tu,p.mau*q.mau*c.mau);
    cout<<D.tu<<"/"<<D.mau;
    cout<<endl;
    
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
