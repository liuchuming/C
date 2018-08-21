#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char s[502] = { 0 };
	int i = 0;
	int len = 0;
	int max = 0;
	int max_id = 0;
	cin.getline(s, 502);
	for(int i=0;i<strlen(s)-1;i++) {
		if (s[i] != ' ') {
			len++;
			if (max < len) {
				max = len;
				max_id = i;
			}
			continue;
		}

			if (s[i] == ' ') {
				len = 0;
		}
				

	
	}
	for (int i = max_id - max+1; i <= max_id; i++) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}