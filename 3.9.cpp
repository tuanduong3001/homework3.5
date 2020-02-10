#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int findNega(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0)
		{
			return arr[i];
			count++;
			break;
		}
	}
	if (count == 0)
		return 1;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << findNega(arr, n);
}