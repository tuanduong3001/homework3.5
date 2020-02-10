#include<iostream>
#include<math.h>


using namespace std;
int octToDec(int n)
{
	int count = 0;
	int s = 0;
	while (n > 0)
	{
		int tmp = n % 10;
		s += tmp * pow(8, count);
		count++;
		n /= 10;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << octToDec(n);
}