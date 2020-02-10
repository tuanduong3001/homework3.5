#include<iostream>
#include<math.h>


using namespace std;
int squareRoot(int n)
{
	if ((int)sqrt(n) - sqrt(n) == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (squareRoot(i))
			cout << i << " ";
	}
}