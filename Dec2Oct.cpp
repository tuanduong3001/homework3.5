#include<iostream>
#include<math.h>


using namespace std;
int decToOct(int n)
{
	int count = 0;
	int s = 0;
	while (n > 0) {
		int tmp = n % 8;
		s += tmp * pow(10, count);
		count++;
		n /= 8;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << decToOct(n);
}