#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    size_t temp;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) s[i] += 32;
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'I' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            s[i] = 0;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 0) cout << "." << s[i];
    }
}
