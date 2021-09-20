#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int countChan = 0, countLe = 0, dem = 0;
        do {
            int n;
            cin >> n;
            if (n % 2 == 1) countLe++;
            else countChan++;
            dem++;
        } while (getchar() != '\n');
        if (dem % 2 == 0 && countChan > countLe) cout << "YES\n";
        else if (dem % 2 == 1 && countChan < countLe) cout << "YES\n";
        else cout << "NO\n";
    }

}

