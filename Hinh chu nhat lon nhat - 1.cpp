#include<bits/stdc++.h>
using namespace std;

int a[100][100];
void hcn2(int m,int n,int *max){
	int d;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				d=0;
				for(int k=0;k<n;k++){
					if(a[i][k]>=a[i][j]){
						d+=a[i][j];
					}
				}
				if((*max)<d) *max=d;
			}
		}
	}
}
void hcn1(int m,int n,int *max){
	for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
			if(a[i][j]>0){
				int k;
				for(k=i+1;a[k][j]==1&&k<m;k++){
					a[i][j]++;						
				}
			}
		}
	}
}
void nhap(int m,int n,int *max,int r[]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			r[i]+=a[i][j];
		}
		cout<<endl;
		if(*max<r[i]) *max=r[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int r[m]={};
		int max=0;
		nhap(m,n,&max,r);
		hcn1(m,n,&max);
		hcn2(m,n,&max);
		cout<<max<<endl;
	}
}
