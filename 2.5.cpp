#include<iostream>


using namespace std;
int factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}
int sum(int n)
{
	if (n == 1) return 1;
	return factorial(n) + sum(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << sum(n);
}