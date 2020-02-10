#include<iostream>


using namespace std;
void thuong(int a, int b) {
	if (b == 0)
		cout << "VN";
	else
		cout << (float)a / b;
}
int main()
{
	int a, b;
	cin >> a >> b;
	thuong(a, b);
}