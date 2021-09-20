#include<bits/stdc++.h>
using namespace std; 
int main(){ 
	int t;
	cin>>t;
	while(t--){ 
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int &x:a) cin>>x;
		multiset<int>multiset; 
		for(int i=0;i<k;i++){
			multiset.insert(a[i]);
		} 
		for(int i=k;i<n;i++){
			cout<<*multiset.rbegin()<<" ";
			multiset.erase(multiset.find(a[i-k]));
			multiset.insert(a[i]);
		} 
		cout<<*multiset.rbegin()<<endl;
	} 
}

