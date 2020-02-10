#include<iostream>


using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if ((a + b > c)&& (a + c > b)&& (b + c > a))
	{
		if (a == b && a == c && b == c)
			cout << "deu";
		else if (a == b || a == c || b == c)
			cout << "can";
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		{
			if (a == b || a == c || b == c)
				cout << "vuong can";
			else
				cout << "vuong";
		}
	}
	else
		cout << -1;
}