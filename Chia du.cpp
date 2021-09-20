#include<iostream> 
using namespace std; 
int x(int a, int m){
	for(int i=1; i<m; i++)
		if((a*i)%m==1) return i;
	return -1; }
int main(){ 
	int t; cin>>t; 
	while(t--){ 
		int a, m; cin>>a>>m;
		cout<<x(a, m)<<endl; 
	} 
	return 0;
}
