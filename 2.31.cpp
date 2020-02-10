#include<iostream>


using namespace std;
int totalDay(int d, int m, int y)
{
	if (m < 3) {
		m += 12;
		y--;
	}
	return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m + 8) / 5 + d;
}
int main()
{
	int d2, m2, y2;
	cin >> d2 >> m2 >> y2;
	int d1, m1, y1;
	cin >> d1 >> m1 >> y1;
	cout << totalDay(d2, m2, y2) - totalDay(d1, m1, y1) + 1;
}