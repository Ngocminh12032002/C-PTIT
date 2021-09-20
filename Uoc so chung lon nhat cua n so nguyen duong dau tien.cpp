#include <iostream>
using namespace std;
typedef unsigned long long int lli;

lli GCD (lli a, lli b) {
    lli tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
lli LCM(lli a, lli b) {
    return (a*b)/GCD(a,b);
}

int main () {
    int t,n;
	cin>>t;
    while (t--) {
    	cin>>n;
    	lli temp=1;
    	for (int i=1;i<=n;i++) {
    		temp=LCM(temp,i);
		}
		cout<<temp<<endl;
	}
    return 0;
}
