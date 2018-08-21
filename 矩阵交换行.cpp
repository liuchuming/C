#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	int n = 0, m = 0;
	cin >> n >> m;
	if (n >= 0 && n < 5 && m >= 0 && m < 5) {
		for (int i = 0; i < 5; i++) {
			int b[1][5];
			b[1][i] = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = b[1][i];
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout<< setw(4)<<a[i][j];
				if (j == 4)cout << endl;

			}
		}
	}
	else
		cout << "error" << endl;
	return 0;
}