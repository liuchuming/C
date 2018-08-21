#include<iostream>
using namespace std;

int main() {
	int N = 0, K = 0;
	cin >> N >> K;
	int a[50], b[50];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (i < K)b[i] = a[i];
	}
	for (int i = 0; i < K-1; i++) {
		for (int j = i+1; j < K; j++) {
			if (b[i] < b[j]) {
				int temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}
	for (int i = K; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (b[j] < a[i]) {
				for (int m = 0; m < K - j - 1; m++) {
					b[K - 1 - m] = b[K- m - 2];
			}
				b[j] = a[i];
				break;

			}
		}
	}
	cout << b[K-1] << endl;
	return 0;

}