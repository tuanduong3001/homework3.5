#include<iostream>


using namespace std;
int factorial(int n)
{
	if (n == 0) return 1;
	return n * factorial(n - 1);
}
int main()
{
	int n, k;
	cin >> n >> k;
	if (n < k) {
		cout << "deo ra dau ngu vua thoi";
	}
	else
		cout << (double)factorial(n) / (factorial(k) * factorial(n - k));
}
