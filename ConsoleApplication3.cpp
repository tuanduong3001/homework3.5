#include<iostream>


using namespace std;
int main()
{
	int h, m, s;
	cin >> h >> m >> s;
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
		cout << "hop le";
	else
		cout << "khong hop le";
}