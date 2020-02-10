#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int isPerfect(int number)
{
	int s = 0;
	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
			s += i;
	}
	if (s == number)
		return 1;
	else
		return 0;
}
int findPerfect(int value,int arr[])
{
	int count = 0;
	for (int i = 0; i < value; i++) {
		if (isPerfect(arr[i])) {
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
	cout << findPerfect(n, arr);
}
