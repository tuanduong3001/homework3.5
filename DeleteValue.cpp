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
void deleteValue(int arr[], int& n, int pos)
{
	if (n <= 0)
		return;
	if (pos < 0)
		pos = 0;
	else if (pos >= n)
		pos = n - 1;
	for (int i = pos; i < n-1; i++) {
		arr[i] = arr[i + 1];
	}
	n--;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	int pos;
	cin >> pos;
	deleteValue(arr, n, pos);
	output(arr, n);
}