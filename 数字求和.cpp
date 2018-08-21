#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int co = 0;
	for (int i = 0; i < 5; i++) {
		int m = 0;
		cin >> m;
		if (n > m) co += m;
	}
	cout << co << endl;
	return 0;
}