#include<iostream>
#include<cstring>
using namespace std;

/*int main() {
	char str[14] = { 0 };
	char substr[4] = { 0 };
	char c = str[0];
	int c_id = 0;
	while (cin >> str >> substr) {
		for (int i = 0; i < strlen(str); i++) {
			if (c < str[i]) {
				c = str[i];
				c_id = i;
			}
		}
		//for (int i = c_id + 1; i<m; i++) {
		//		str[m + 5 - i] = str[m - i+2];
		//}
		for (int i = 9; i > c_id; i--) {
			str[i + 3] = str[i];
		}
		str[c_id + 1] = substr[0];
		str[c_id + 2] = substr[1];
		str[c_id + 3] = substr[2];

		
		cout << str<<endl;
	}
	return 0;
}*/
int main()
{
	char str[14] = { 0 }, substr[4] = { 0 };
	while (cin >> str >> substr)
	{
		int i = 0, posBiggest = 0;
		char strBiggest = 0;
		while (str[i])
		{
			if (str[i] > strBiggest)
			{
				posBiggest = i;
				strBiggest = str[i];
			}
			i++;
		}
		for (int j = 9; j > posBiggest; j--)
		{
			str[j + 3] = str[j];
		}
		str[posBiggest + 1] = substr[0];
		str[posBiggest + 2] = substr[1];
		str[posBiggest + 3] = substr[2];
		cout << str << endl;
	}
	return 0;
}