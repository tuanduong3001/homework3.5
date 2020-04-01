#include<iostream>
#include<math.h>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int findSmallest(int arr[], int n)
{
	int min = 999999, count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0 && abs(arr[i]) < min)
		{
			min = arr[i];
			count++;
		}
	}
	if (count == 0)
		return -1;
	else
		return min;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << findSmallest(arr, n);
}