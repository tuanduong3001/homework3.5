﻿#include<iostream>


using namespace std;
int isPerfect(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return 1;
	else return 0;
}
int main()
{
	int n;
	cin >> n;
	if (isPerfect(n) == 1)
		cout << "yes";
	else
		cout << "no";
}
