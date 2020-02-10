#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void output(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void bubbleSort(int arr[], int n)
{
	bool haveSwap = false;
	for (int i = 0; i < n - 1; i++) {
		haveSwap = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				haveSwap = true;
			}
		}
		if (haveSwap == false)
			break;
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	bubbleSort(arr, n);
	output(arr, n);
}