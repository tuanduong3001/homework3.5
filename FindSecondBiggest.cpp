#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void selectionSort(int arr[], int n)
{
	int min_idx;
	for (int i = 0; i < n - 1; i++) {
		min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[min_idx])
				min_idx = j;
		}
		swap(arr[min_idx], arr[i]);
	}
}
int find2Max(int arr[], int n)
{
	selectionSort(arr, n);
	return arr[1];
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << find2Max(arr, n);
}
