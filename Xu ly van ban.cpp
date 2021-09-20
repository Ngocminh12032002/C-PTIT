#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    string s;
    string tmp;
    vector<string>v;
    while (cin >> s) {
        for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
        tmp += s;
        tmp += " ";
        char x = s[s.length() - 1];
        if (x == '.' || x == '?' || x == '!') {
            tmp.pop_back();
            tmp.pop_back();
            v.push_back(tmp);
            v.front()[0] = toupper(v.front()[0]);
            tmp = "";
            for (auto x : v) cout << x << endl;
            v.clear();
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

string chuan(string s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

bool check(char c){
    return c=='.'|| c=='!' || c=='?' ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> s;
    string tg,p="";
    while(cin>>tg){
        if(check(tg[tg.size()-1])){
            tg.erase(tg.size()-1);
            p+=tg;
            s.push_back(p);
            p="";
        }
        else p+= tg + " ";
    }    
    for(auto x : s){
        cout<<chuan(x)<<endl;
    }

}
#include<bits/stdc++.h>
using namespace std;

string chuan(string s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
    return s;
}

bool check(char c){
    return c=='.'|| c=='!' || c=='?' ;
}

int main(){
    vector<string> s;
    string tg,p="";
    while(cin>>tg){
        if(check(tg[tg.size()-1])){
            tg.erase(tg.size()-1);
            p+=tg;
            s.push_back(p);
            p="";
        }
        else p+= tg + " ";
    }    
    for(auto x : s){
        cout<<chuan(x)<<endl;
    }

}
