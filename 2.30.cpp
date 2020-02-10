#include<iostream>


using namespace std;
int sum(int n)
{
	int s = 0;
	while (n > 0) {
		int tmp = n % 10;
		s += tmp;
		n /= 10;
	}
	return s;
}
int multiply(int n)
{
	int m = 1;
	while (n > 0) {
		int tmp = n % 10;
		m *= tmp;
		n /= 10;
	}
	return m;
}
int main()
{
	for (int i = 10; i <= 99; i++) {
		if (multiply(i) == 2 * sum(i))
			cout << i << " ";
	}
}