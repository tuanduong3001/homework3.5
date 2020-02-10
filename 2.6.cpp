#include<iostream>
#include<math.h>


using namespace std;
int checkSquareroot(int n)
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
	cout << checkSquareroot(n);
}