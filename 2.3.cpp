#include<iostream>


using namespace std;
float sum(int n)
{
	if (n == 1) return 1;
	return 1 / (float)n + sum(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << sum(n);
}