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
int findFirst(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i])) {
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
	cout << findFirst(arr, n);
}