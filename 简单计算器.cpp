#include<iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	char c;
	cin >> n >> m >> c;
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		if (c == '/'&&m == 0) cout << "Divided by zero!"<<endl;
		else {
			switch (c) {
				case '+': cout << n + m << endl; break;
				case '-': cout << n - m << endl; break;
				case '*':cout << n * m << endl; break;
				case '/':cout << n / m << endl; break;
			}
				
		}
	}
	else cout << "Invalid operator!"<<endl;
	return 0;
}