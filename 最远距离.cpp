#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	double a[500][2];
	for (int i = 0; i < n; i++)
		cin >> a[i][0] >> a[i][1];
	double max = 0.0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			double temp=sqrt(pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2));
			if (temp > max)max = temp;
		}
	}
	cout <<fixed<<setprecision(4)<< max << endl;
	return 0;
}