#include<iostream>


using namespace std;
int checkBiggest(int n)
{
	int max = 0;
	while (n > 0)
	{
		int tmp = n % 10;
		if (max < tmp) max = tmp;
		n /= 10;
	}
	return max;
}
int main()
{
	int n;
	cin >> n;
	cout << checkBiggest(n);
}