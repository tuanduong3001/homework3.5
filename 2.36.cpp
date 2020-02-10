#include<iostream>
#include<math.h>

using namespace std;
float totalSquare(int n, float x)
{
	if (n == 1) return sqrt(x);
	return sqrt(x + totalSquare(n - 1,x));
}
int main()
{
	int n;
	cin >> n;
	float x;
	cin >> x;
	cout << totalSquare(n, x);
}