#include<iostream>
#include<math.h>



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
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int countPrime(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]))
			count++;
	}
	if (count == 0)
		return -1;
	else
		return count;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << countPrime(arr, n);
}