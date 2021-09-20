#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;

int ChanLe(int n) {
	int check = 0;
	while (n > 0) {
		int i = n % 10;
		if (i % 2 == 0) check++;
		else check--;
		n /= 10;
	}
	if (check == 0) return 0;
	else return 1;
}
int main() {
	int n, dem = 0;
	cin >> n;
	for (int i = pow(10, n - 1); i < pow(10, n); i++) {
		if (ChanLe(i) == 0) {
			cout << i << " ";
			dem++;
		}
		if (dem == 10) {
			cout << endl;
			dem = 0;
		}
	}
	return 0;
}
