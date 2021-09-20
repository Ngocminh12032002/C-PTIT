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
		long long maxRes = 0; 
		for(int i=str.size()-1; i>=0; i--) {
			if(str[i]>='a' && str[i]<='z') { 
				if(!s.empty()) {
					long long res = 0; 
					while(!s.empty()) {
						long long x = s.top()-'0'; 
						res = res*10 + x; 
						s.pop();
					} 
					maxRes = max(maxRes, res); 
				} 
			}
			else {
				s.push(str[i]);
			} 
		}
		cout<<maxRes<<endl;
	}
}
