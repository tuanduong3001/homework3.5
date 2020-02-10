#include<iostream>


using namespace std;
long long decToBin(int n)
{
	long long s = 0;
	int count = 0;
	while (n > 0)
	{
		int tmp = n % 2;
		s += tmp * pow(10, count);
		count++;
		n /= 2;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << decToBin(n);
}