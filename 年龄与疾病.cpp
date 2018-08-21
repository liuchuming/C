#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int n = 0;
	cin >> n;
	int a[100];
	double aa = 0, bb = 0, cc = 0, dd = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= 18) aa++;
		if (a[i] > 18 && a[i] <= 35) bb++;
		if (a[i] > 35 && a[i] <= 60) cc++;
		if (a[i] > 60)dd++;
	}
	cout << "1-18: " << fixed << setprecision(2) << aa / n * 100 << '%' << endl;
	cout << "19-35: " << fixed << setprecision(2) << bb / n * 100 << '%' << endl;
	cout << "36-60: " << fixed << setprecision(2) << cc / n * 100 << '%' << endl;
	cout << "60-: " << fixed << setprecision(2) << dd / n * 100 << '%' << endl;
	return 0;
}