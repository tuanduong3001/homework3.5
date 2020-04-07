#include<iostream>


using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int maxSum(int arr[], int &n)
{
	int min = 999999, s = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	return s- min;
}
int minSum(int arr[], int &n)
{
	int max = -9999999, s = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	return s- max;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << minSum(arr, n) << " " << maxSum(arr, n);
}