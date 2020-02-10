#include<iostream>


using namespace std;
int findDay(int d, int m, int y)
{
	if (m < 3) {
		m += 12;
		y--;
	}
	return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m + 8) / 5 + d;
}
int main()
{
	int d1, m1, y1;
	cin >> d1 >> m1 >> y1;
	const int d2 = 1, m2 = 1, y2 = y1 + 1;
	cout << findDay(d2, m2, y2) - findDay(d1, m1, y1);
}