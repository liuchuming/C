#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	m %= n;
	int a[500];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int t = 0;
	for (int j = 0; j < m; j++) {
		int tmp = a[n-1];
		for (int i = n-1; i > 0; i--) {
			a[i] = a[i - 1];
		}
		a[0] = tmp;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	return 0;
}