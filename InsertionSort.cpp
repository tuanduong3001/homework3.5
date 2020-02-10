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
void insertionSort(int arr[], int n)
{
	int key;
	for (int i = 1; i < n; i++) {
		key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	insertionSort(arr, n);
	output(arr, n);
}