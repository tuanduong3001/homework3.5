#include<iostream>
#include<math.h>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int isPrime(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int findLast(int number, int arr[])
{
	int count = 0;
	for (int i = number - 1; i >= 0; i--) {
		if (isPrime(arr[i]))
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
	cout << findLast(n, arr);
}