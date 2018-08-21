#include<iostream>
using namespace std;

int main() {
	char s[80] = { 0 };
	cin.getline(s, 80);
	int a=0, e=0, ii=0, o=0, u=0;
	for (int i = 0; i < 80 && s[i] != 0; i++) {
		if (s[i] == 'a')a++;
		if (s[i] == 'e')e++;
		if (s[i] == 'i')ii++;
		if (s[i] == 'o')o++;
		if (s[i] == 'u')u++;
	}
	cout << a << ' ' << e << ' ' << ii << ' ' << o << ' ' << u << endl;
	return 0;
}