#include<iostream>
#include<math.h>


using namespace std;
int isPrime(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int countPrime(int n)
{
	int count = 0;
	while(n > 0)
	{
		int tmp = n % 10;
		if (isPrime(tmp))
			count++;
		n /= 10;
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	cout << countPrime(n);
}