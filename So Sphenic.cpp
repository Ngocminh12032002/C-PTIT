#include<iostream> 
#include<math.h>
#include<algorithm>
using namespace std;
bool Sphenic(int n) {
	int dem = 0, a[100] = { 0 }, k = 0;
	for (int i = 2; i <= n; i++)
		while (n % i == 0) {
			a[dem++] = i;
			n /= i;
		}
	if (n > 1) a[dem] = n;
	for (int i = 0; i < dem - 1; i++) {
		if (a[i] != a[i + 1]) k++;
	}
	if (dem == 3 && k == 2) return 1;
	else return 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (Sphenic(n) == 1) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
