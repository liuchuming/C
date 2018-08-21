#include<iostream>
using namespace std;

int main(){
	int arr[6], a = 0, b = 0;
	for (int i = 0; i < 6; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i++){
		if (arr[i]%2 == 1) a = arr[i];
		if (arr[i]%2 == 0) b = arr[i];
	}
	for(int i = 0; i < 6; i++){
		if(arr[i]%2 == 1 && arr[i] > a) a = arr[i];
		if(arr[i]%2 == 0 && arr[i] < b) b = arr[i];
	}
	if(a>b) cout<<(a-b);
	else cout<<(b-a);
	return 0;
} 
