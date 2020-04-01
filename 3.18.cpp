#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int isPrime(int n)
{
	if (n < 2)
		return 0;
	if (n > 2) {
		if (n % 2 == 0)
			return 0;
		for (int i = 3; i <= trunc(sqrt(n)); i++) {
			if (n % i == 0)
				return 0;
		}
	}
	return 1;
}
int findBiggest(int arr[], int n)
{
	int count = 0, max = -99999999;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]) && arr[i] > max) {
			max = arr[i];
			count++;
		}
	}
	if (count == 0)
		return 0;
	else
		return max;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << findBiggest(arr, n);
}