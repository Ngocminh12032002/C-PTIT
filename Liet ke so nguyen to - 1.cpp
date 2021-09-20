#include<iostream>
using namespace std; 
bool isPrime(int n){ 
	if(n<2) return false; 
	for(int i=2; i*i <=n; i++){
		if(n % i ==0){ return false; } 
	}
	return true; 
} 
int main(){
	int a,b,m; cin>>a>>b; 
	if(a>0 &&b>0 ){
		if(a>b){ 
			m=a;a=b;b=m;
		} 
		for(int i= a; i<b; i++){
			if(isPrime(i)){ 
				cout<<i<<" ";
			}
		} 
		return 0;
	}
}
