﻿#include<iostream>


using namespace std;
int flipNumber(int n)
{
	int s = 0;
	while (n > 0)
	{
		int tmp =n % 10;
		s = s * 10 + tmp;
		n /= 10;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << flipNumber(n);
}