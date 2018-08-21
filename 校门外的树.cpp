#include<iostream>
using namespace std;

int main() {
	int L = 0, M = 0;
	int num = 0;
	cin >> L >> M;
	int a[10000] = { 0 };
	int b[100][2] = { {0,0} };
	for (int j = 0; j <= L; j++) {
		a[j] = 1;
	}
	for (int i = 0; i < M; i++) {
		cin >> b[i][0] >> b[i][1];
		for (int p = b[i][0]; p <= b[i][1]; p++) {
			a[p] = 0;
		}
	}
	for (int r = 0; r <= L; r++) {
		if (a[r] != 0)num++;
	}
	cout << num << endl;
	return 0;
}