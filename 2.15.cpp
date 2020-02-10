#include<iostream>


using namespace std;
int main()
{
	int n, tmp2, i = 0, k = 0;
	cin >> n;
	int tmp1 = n % 10;
	n /= 10;
	while (n != 0)
	{
		tmp2 = n % 10;
		if (tmp1 > tmp2)
			k = 1;
		else if (tmp1 < tmp2)
			i = 1;
		tmp1 = tmp2;
			n /= 10;
	}
	if (i == 1 && k == 0)
		cout << "decrease";
	else if (k == 1 && i == 0)
		cout << "increase";
	else if ((k == 0 && i == 0) || (k == 1 && i == 1))
		cout << "neither increase nor decrease";
}