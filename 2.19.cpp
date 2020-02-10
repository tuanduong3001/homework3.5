#include<iostream>
#include<math.h>


using namespace std;
int isPrime(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i))
			count++;
	}
	cout << count;
}