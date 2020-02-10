#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int findNegativeMax(int number, int arr[])
{
	int max = -999999;
	for (int i = 0; i < number; i++)
	{
		if (arr[i] > max&& arr[i] < 0)
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
	cout << findNegativeMax(n, arr);
}