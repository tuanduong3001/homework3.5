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
	for (int i = 0; i < n; i++) {
		s += arr[i];
		avg = (float)s / (i + 1);
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