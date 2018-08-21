#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int N = 0, K = 0;
	while(cin >> N >> K){
	for (int i = 0; i < 20;) {
		if (N*(i + 1) >= 200 * pow((1 + K / 100.0),i)){
			cout << i + 1 << endl;
			break;
		}
		i++;
		if (i == 20)
			cout << "Impossible" << endl;
	}
	}
	return 0;
}