#include<iostream>
#include<math.h>


using namespace std;
int binToDec(long long n)
{
	int s = 0;
	int count1 = 0;
	while (n > 0)
	{
		int tmp = n % 10;
		s += tmp * pow(2, count1);
		count1++;
		n /= 10;
	}
	return s;
}
int main()
{
	long long n;
	cin >> n;
	cout << binToDec(n);
}
