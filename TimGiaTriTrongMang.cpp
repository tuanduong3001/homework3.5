#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int findNumber(int arr[], int n, int v)
{
	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			return i;
	}
	return -1;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	int v;
	cin >> v;
	cout << findNumber(arr, n, v);
}