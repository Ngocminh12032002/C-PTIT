#include<iostream>
using namespace std;
long long mang[1000000], mang2[1000000];
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> mang[i];
		}
		for (int i = 0; i < n; i++) {
			mang2[i] = -1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (mang[i] == j) {
					mang2[j] = j;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			cout << mang2[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
