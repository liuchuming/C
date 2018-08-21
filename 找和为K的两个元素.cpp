#include<iostream>
using namespace std;

int main() {
	int n = 0, k = 0;
	cin >> n >> k;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool flag = 0;
	for (int i = 0; i < n - 1; i++) {
		if (flag)break;
		for (int j = i+1; j < n; j++) {
			if (a[i] + a[j] == k)
			{
				cout << "yes" << endl;
				flag = 1; break;
			}
		}
		
	}
	if(flag==0)
	cout << "no" << endl;
	return 0;
}