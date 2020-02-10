#include<iostream>


using namespace std;
int algorithmOfEculid( int a, int b)
{
	while (b!=0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << algorithmOfEculid(a, b);
}
