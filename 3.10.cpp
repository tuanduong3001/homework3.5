#include<iostream>



using namespace std;
void input(int arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int findEven(int number, int arr[])
{
	int count = 0;
	for (int i = 0; i < number; i++) {
		if (arr[i] % 2 == 0) {
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
	cout << findEven(n, arr);
}