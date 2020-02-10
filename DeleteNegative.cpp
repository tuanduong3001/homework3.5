#include<iostream>



using namespace std;
void input(int arr[], int &n)
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
void deleteValue(int arr[], int& n, int pos)
{
	for (int i = pos; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}
void deleteNegative(int arr[], int &n)
{
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			deleteValue(arr, n, i);
			i--;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	deleteNegative(arr, n);
	output(arr, n);
}