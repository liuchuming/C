#include<iostream>
using namespace std;

int main() {
	int N = 0;
	int a[15000] = { 0 };
	int b[15000] = { 0 };
	while (cin >> N) {
		if (N == 0)break;
		for (int i = 0; i < N; i++) {
			cin >> a[i];
			if (i <= N / 2)b[i] = a[i];
		}
		for (int i = 0; i <=N/2-1; i++) {
			for (int j = i + 1; j <=N/2; j++) {
				if (b[i] < b[j]) {
					int temp = b[j];
					b[j] = b[i];
					b[i] = temp;
				}
			}
		}
		for (int i = N/2+1; i < N; i++) {
			for (int j = 0; j <= N/2; j++) {
				if (b[j] < a[i]) {
					for (int m = 0; m < N/2 - j; m++) {
						b[N/2 - m] = b[N/2 - m - 1];
					}
					b[j] = a[i];
					break;

				}
			}
		}
		if (N % 2 == 0)cout << (b[N / 2 - 1] + b[N / 2]) / 2 << endl;
		if (N % 2 == 1)cout << b[N / 2] << endl;

	}
	return 0;
}