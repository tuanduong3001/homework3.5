#include<iostream>


using namespace std;
int  factorial(int n)
{
	if (n == 0) return 1;
	return n * factorial(n - 1);
}
int sum(int n)
{
	if (n == 1) return 1;
	return n + sum(n - 1);
}
float totalSum(int n)
{
	if (n == 1) return 1;
	return (float)sum(n) / factorial(n) + totalSum(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << totalSum(n);
}
