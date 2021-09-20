#include<vector>
#include<iostream>
#include<string.h>
#include<sstream>
#include<stdlib.h>
using namespace std;
int b;
void chuyen(string s) {
    cin >> b;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
    if (s[0] != 32) s[0] = toupper(s[0]);
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ') s[i + 1] = toupper(s[i + 1]);
    }
    stringstream ss(s);
    string temp, s1;
    vector<string>v1;
    while (ss >> temp) {
        v1.push_back(temp);
    }
    vector<string>::iterator it;
    if (b == 1) {
        cout << v1.back() << " ";
        for (it = v1.begin(); it != v1.end() - 1; it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    else {
        for (it = v1.begin() + 1; it != v1.end(); it++) {
            cout << *it << " ";
        }
        cout << v1.front() << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        chuyen(s);
    }
    return 0;
}
