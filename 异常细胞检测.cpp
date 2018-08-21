#include<iostream>
using namespace std;

/*int main() {
	int N = 0;
	cin >> N;
	int a[100][100];
	int num = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			if (a[i][j] > 255)a[i][j] = 255;
			if (a[i][j] < 0)a[i][j] = 0;
		}
	}
	for (int i = 1; i < N-1; i++) {
		for (int j = 1; j < N-1; j++) {
			if( (a[i][j] - a[i - 1][j] <= 50) && (a[i][j] - a[i + 1][j] <= 50) && (a[i][j] - a[i][j - 1] <= 50) && (a[i][j] - a[i][j + 1] <= 50) ){
				num++;
			}
		}
	}
	cout << num << endl;
	return 0;
}*/
int main()
{
	int sample[100][100];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> sample[i][j];
		}
	}
	int cellX = 0;
	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 1; j < N - 1; j++)
		{
			if (sample[i][j] <= sample[i - 1][j] - 50 && sample[i][j] <= sample[i + 1][j] - 50 && \
				sample[i][j] <= sample[i][j - 1] - 50 && sample[i][j] <= sample[i][j + 1] - 50)
			{
				cellX++;
			}
		}
	}
	cout << cellX << endl;
	return 0;
}