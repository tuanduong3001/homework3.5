#include<iostream>

using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int max;
	max = a;
	if (b > max)
		max = b;
	cout << max;
}