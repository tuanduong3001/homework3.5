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
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return 1;
	else
		return 0;
}
int findLastPerfect(int arr[], int number)
{
	int count = 0;
	for (int i = number - 1; i >= 0; i--) {
		if (isPerfect(arr[i]))
		{
			count++;
			return arr[i];
			break;
		}
	}
	if (count == 0)
		return 0;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << findLastPerfect(arr, n);
}