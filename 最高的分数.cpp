#include<iostream>
using namespace std;

int main() {
	int n;
	int a[100];
	cin >> n;
	int max = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	max = a[0];
	for(int i = 0; i < n; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	cout << max << endl;
	return 0;
}
