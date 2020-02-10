#include<iostream>


using namespace std;
int main()
{
	int h, m, s;
	cin >> h >> m >> s;
	if (h < 24 && m < 60 && s < 60) {
		if (s == 59) {
			if (m == 59) {
				if (h == 23)
					cout << "0:0:0";
				else
					cout << h + 1 << " " << 0 << " " << 0;
			}
			else
				cout << h << " " << m + 1 << " " << 0;
		}
		else
			cout << h << " " << m << " " << s + 1;
	}
	else
		cout << -1;
}