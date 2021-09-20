#include<iostream>
#include<string.h>
#include<vector>
#include<sstream>
#include<set>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string chuoi1;
        string chuoi2;
        getline(cin, chuoi1);
        getline(cin, chuoi2);
        string tmp, tmp2;
        stringstream ss(chuoi1), ss2(chuoi2);
        set<string>vt;
        while (ss >> tmp) {
            vt.insert(tmp);
        }
        set<string>chuoi;
        while (ss2 >> tmp2) {
            chuoi.insert(tmp2);
        }
        for (auto x : vt) {
            if (chuoi.count(x) == 0) cout << x << " ";
        }
        cout << endl;
    }
}

