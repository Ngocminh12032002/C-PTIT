#include<iostream>
#include<math.h>
using namespace std; 
int n, A[20];
void xuat(){ 
	for(int i=1;i<=n;i++) 
		cout<<A[i]; 
	cout<<" ";
} 
void sinh(int i){
	for(int j = 0; j<=1; j++){ 
		A[i] = j; 
		if( i == n) xuat();
		else sinh(i +1); 
	}
} 
int main(){
	int t; cin >>t; 
	while(t--){
		scanf("%d",&n);
		sinh(1); 
		cout<< endl; 
	} 
	return 0;
}
