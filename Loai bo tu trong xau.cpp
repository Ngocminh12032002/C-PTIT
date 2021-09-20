#include <iostream> 
#include <string>
using namespace std;

int main() {
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	size_t temp;
	int leng = s2.length();
	do {
		temp = s1.find(s2);
		if (temp == -1) break;
		s1.erase(temp, leng);
	} while (1);
	for (int i = 0; i < s1.size(); i++) {
		cout << s1[i];
	}
	return 0;
}
