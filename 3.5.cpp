#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
float average(int arr[], int n)
{
	int s = 0;
	float avg = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 5 == 0)
		{
			s += arr[i];
			count++;
			avg = (float)s / count;
		}
	}
	return avg;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << average(arr, n);
}
