#include<iostream>


using namespace std;
int factorial(int n)
{
	if (n == 0) return 1;
	return n * factorial(n - 1);
}
float sum(int n,float x)
{
	if (n == 0) return 1;
	return pow(x, n) / (float)factorial(n) + sum(n - 1,x);
}
int main()
{
	int n;
	cin >> n;
	float x;
	cin >> x;
	cout << sum(n,x);
}
