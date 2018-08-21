#include<iostream>
using namespace std;

int main() {
	int h = 0, r = 0;
	cin >> h >> r;
	double c = 3.1415926 * h * r * r;
	cout << int(20000/c)+1 << endl;
	return 0;
}
