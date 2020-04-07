#include<iostream>



using namespace std;
void input(int& n)
{
	cin >> n;
}
void output(int n)
{
	cout << n * (n + 1) / 2;
}
int main()
{
	int n;
	input(n);
	output(n);
}