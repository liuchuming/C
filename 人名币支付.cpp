#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	cout << n / 100 << endl;
	cout << n % 100 / 50 << endl;
	cout << n % 150 %50/ 20 << endl;
	cout << n % 100 % 50 % 20 / 10 << endl;
	cout << n % 100 % 50 % 20 % 10 / 5 << endl;
	cout << n % 100 % 50 % 20 % 10 % 5 << endl;
	return 0;

}