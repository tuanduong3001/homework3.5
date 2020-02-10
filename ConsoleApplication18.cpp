#include<iostream>
#include<math.h>


using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int delta = b * b - 4 * a * c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				cout << "vsn";
			else
				cout << "vn";
		}
		else
			cout << (float)-c / b;
	}
	else {
		if (delta < 0)
			cout << "vn";
		if (delta == 0)
			cout << (float)-b / (2 * a);
		if (delta > 0)
			cout << (float)(-b - sqrt(delta)) / (2 * a) << "  " << (float)(-b + sqrt(delta)) / (2 * a);
	}
}