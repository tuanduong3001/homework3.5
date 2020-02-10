#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int findMax(int n, int arr[])
{
	int max = -9999999;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << findMax(n, arr);
}