#include<iostream>


using namespace std;
int checkPositive(int n)
{
	while (n > 0)
	{
		int tmp = n % 10;
		if (tmp % 2 != 0)
			return 0;
		n /= 10;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	if (checkPositive(n) == 1)
		cout << "yes";
	else
		cout << "no";
}