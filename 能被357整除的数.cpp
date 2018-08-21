#include<iostream>
using namespace std;

int main() {
	int n = 0;
	while (cin >> n) {
		if (n % 3 == 0) {
			cout << 3;
			if (n % 5 != 0 && n % 7 != 0)cout << endl;
		}
		if (n % 5 == 0) {
			if (n % 3 == 0)cout << ' ' << 5;
			else cout << 5;
			if (n % 7 != 0)cout << endl;
		}
		if (n % 7 == 0) {
			if (n % 3 == 0 || n % 5 == 0)cout << ' ' << 7<<endl;
			else cout << 7<<endl;
		}
		if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)cout << 'n' << endl;
		
	}
	return 0;
}