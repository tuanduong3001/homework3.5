#include<iostream>


using namespace std;
int findDivisor(int n, int i)
{
	for (i = n; i >= 1; i--)
	{
		if (n % i == 0 && i % 2 != 0)
			break;
	}
	return i;
}
int main()
{
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		cout << findDivisor(n, i);
		break;
	}
}