#include<iostream>


using namespace std;
int totalSum(int n, int a, int b)
{
	int s = 0;
	for (int i = 0; i <= n; i++) {
		if (i % a == 0 && i % b != 0 && i < n)
			s += i;
	}
	return s;
}
int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	cout << totalSum(n, a, b);
}