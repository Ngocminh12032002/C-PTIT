#include<iostream>
#include<string.h>
using namespace std;
void loaixau(char s[]) {
    char a[100000];
    int k = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0') i = i + 3;
        a[k++] = s[i];
    }
    strcpy(s, a);
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        char s[100000], a[100000];
        cin >> s;
        int n = strlen(s);
        for (int i = 0; i < n / 3; i++) {
            loaixau(s);
        }
        cout << n - strlen(s) << endl;
    }
}

