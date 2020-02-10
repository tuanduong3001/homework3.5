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
float average(int arr[], int n)
{
	int count = 0;// Tạo biến đếm cho số nguyên tố
	int s = 0;
	float avg = 0;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i]))
		{
			s += arr[i];
			count++;
			avg = (float)s / count;
		}
	}
	return avg;
}
int main()
{
	int n;
	cin >> n;
	int arr[1000];
	input(arr, n);
	cout << average(arr, n);
}
