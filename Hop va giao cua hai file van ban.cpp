#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <map>
#include <set>
using namespace std;
int main()
{
    ifstream input1("DATA1.in");
    ifstream input2("DATA2.in");
    string s;
    set<string> set1;
    set<string> set2;
    set<string> set3;
    map<string, int> m;
    while (!input1.eof())
    {
        input1 >> s;
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        set1.insert(s);
        set2.insert(s);
    }
    while (!input2.eof())
    {
        input2 >> s;
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        set1.insert(s);
        set3.insert(s);
    }
    for (set<string>::iterator it = set1.begin(); it != set1.end(); it++)
        cout << *it << " ";
    cout << endl;
    for (set<string>::iterator it2 = set2.begin(); it2 != set2.end(); it2++)
        m[*it2]++;
    for (set<string>::iterator it3 = set3.begin(); it3 != set3.end(); it3++)
        m[*it3]++;
    for (map<string, int>::iterator it4 = m.begin(); it4 != m.end(); it4++)
        if (it4->second > 1)
            cout << it4->first << " ";
    return 0;
}
