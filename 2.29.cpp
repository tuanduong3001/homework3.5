#include<iostream>


using namespace std;
int main()
{
	int n;
	cin >> n;
	int count100000 = 0;
	int count50000 = 0, count20000 = 0, count10000 = 0;
	while (n > 0) {
		if (n >= 100000) {
			n -= 100000;
			count100000++;
		}
		else if (n < 100000 && n >= 50000) {
			n -= 50000;
			count50000++;
		}
		else if (n < 50000 && n >= 20000) {
			n -= 20000;
			count20000++;
		}
		else if (n < 20000 && n >= 10000) {
			n -= 10000;
			count10000++;
		}
	}
	cout << "so to 100000 la " << count100000 << endl;
	cout << "so to 50000 la " << count50000 << endl;
	cout << "so to 20000 la " << count20000 << endl;
	cout << "so to 10000 la " << count10000 << endl;
}