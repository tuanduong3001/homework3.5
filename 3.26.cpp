#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void swapArray(int arr[], int n)
{
	int locMax = 0;
	int locMin = 0;
	int max = -9999999;
	int min = 999999;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			locMax = i;
		}
	}
	for (int j = 0; j < n; j++) {
		if (arr[j] < min) {
			min = arr[j];
			locMin = j;
		}
	}
	swap(arr[locMax], arr[locMin]);
}
void output(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	swapArray(arr, n);
	output(arr, n);
}

