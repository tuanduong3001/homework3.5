#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int isPerfect(int n)
{
	int s = 0;
	for (int i = 1; i <=n/2; i++) {
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return 1;
	else
		return 0;
}
int findSmallest(int arr[], int number)
{
	int count = 0, min = 9999999;
	for (int i = 0; i < number; i++) {
		if (isPerfect(arr[i]) && arr[i] < min)
		{
			min = arr[i];
			count++;
		}
	}
	if (count == 0)
		return 0;
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