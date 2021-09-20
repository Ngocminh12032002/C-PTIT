#include <iostream> 
using namespace std;
int a; 
void Rutgon() { 
	int b=0; 
	while (a>0) {
		b+=a%10;
		a/=10; 
	} 
	a=b;
} 
int main() {
	int N;
	cin>>N;
	while(N--) {
		cin>>a; 
		while (a>9) 
			Rutgon();
		cout<<a<<endl; 
	} 
}
