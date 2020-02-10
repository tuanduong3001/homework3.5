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
void addValue(int arr[], int& n, int val, int pos)
{
	if (pos < 0)
		pos = 0;
	else if (pos >= n)
		pos = n;
	for (int i = n; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = val;
	n++;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	int val;
	cout << "Nhap gia tri can them ";
	cin >> val;
	int pos;
	cout << "Nhap vi tri de them ";
	cin >> pos;
	addValue(arr, n, val, pos);
	output(arr, n);
}