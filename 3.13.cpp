#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int findPositive(int arr[], int number)
{
	int count = 0;
	for (int i = number - 1; i >= 0; i--) {
		if (arr[i] > 0)
		{
			count++;
			return arr[i];
			break;
		}
	}
	if (count == 0)
		return -1;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << findPositive(arr, n);
}