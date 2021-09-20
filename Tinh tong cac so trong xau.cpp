#include<bits/stdc++.h> 
using namespace std;
int main() {
	int t; 
	cin>>t;
	while(t--) { 
		string str;
		cin>>str;
		str = 'a' + str; 
		stack<char> s;
		long long sum = 0;
		for(int i=str.size()-1; i>=0; i--) {
			if(str[i]>='a' && str[i]<='z') {
				bool check = false;
				int res = 0;
				while(!s.empty()) { 
					check = true; 
					int x = s.top()-'0';
					res = res*10 + x;
					s.pop();
				} 
				if(check) { 
					sum += res; 
				}
			} 
			else { 
				s.push(str[i]);
			} 
		} 
		cout<<sum<<endl; 
	}
}
