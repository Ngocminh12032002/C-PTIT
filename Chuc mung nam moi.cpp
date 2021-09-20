#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    set<string> s;
    while (t--)
    {
        string a;
        getline(cin, a);
        s.insert(a);
    }
    cout << s.size() << endl;

}
