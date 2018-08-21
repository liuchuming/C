#include<iostream>
using namespace std;

int main(){
	int n = 0, x = 0, y = 0;
	cin >> n >> x >> y;
	int m=0;
	if(y%x == 0) m = n - y/x;
	else m = n - y/x -1; 
	if(m<0) m=0;
	cout << m << endl;
	return 0;
} 
