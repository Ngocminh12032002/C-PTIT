#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
#include <iomanip>
#include <map>
#include <fstream>
using namespace std;
int main()
{
    string data;
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    do
    {
        getline(input, data);
        output << data << endl;
    } while (! input.eof());
    cout << data;
    input.close();
    output.close();
    return 0;
}
