#include<iostream>


using namespace std;
int divisor(int a, int b)
{
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int numerator = a * d + b * c;
	int denominator = b * d;
	if ((float)denominator / divisor(numerator, denominator) == 1)
		cout << (float)numerator / divisor(numerator, denominator);
	else
		cout << (float)numerator / divisor(numerator, denominator) << "/" << (float)denominator / divisor(numerator, denominator);
}

