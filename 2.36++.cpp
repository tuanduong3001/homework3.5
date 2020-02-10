#include<iostream>


using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	char character;
	cin >> character;
	switch (character)
	{
	case '+':
		cout << a << "+" << b << " " << a + b << endl;
		break;
	case '-':
		cout << a << "-" << b << " " << a - b << endl;
		break;
	case '*':
		cout << a << "*" << b << " " << a * b << endl;
		break;
	case '/':
		cout << a << "/" << b << " " <<(float)a / b << endl;
		break;
	}
}