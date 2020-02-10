#include<iostream>


using namespace std;
void findRoot(int a, int b)
{
	if (a == 0)
		cout << "VN";
	else
		cout << (float)-b / a;
}
int main()
{
	int a, b;
	cin >> a >> b;
	findRoot(a, b);
}