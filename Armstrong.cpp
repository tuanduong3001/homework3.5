#include<iostream>
#include<math.h>



using namespace std;
int countNumber(int n)
{
	int count = 0;
	while (n > 0)
	{
		int tmp = n % 10;
		count++;
		n /= 10;
	}
	return count;
}
int isArms(int n)
{
	int s = 0;
	int count1 = countNumber(n);
	while (n > 0) {
		int tmp = n % 10;
		s += pow(tmp, count1);
		n /= 10;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	if (isArms(n) == n)
		cout << "is arms";
	else
		cout << "not arms";
}