#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int binarySearch(int arr[], int l, int r, int x)
{
	if (l < r) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] < x)
			return binarySearch(arr, mid + 1, r, x);
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
	}
	return -1;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	int x;
	cin >> x;
	int result = binarySearch(arr, 0, n - 1, x);
	if (result == -1)
		cout << "khong tim thay";
	else
		cout << "tim thay " << x << " tai chi so " << result;
}