#include<iostream>


using namespace std;
void divisorAnalysis(int n)
{
	for (int i = 2; i <= n; i++)
	{
		int count = 0;
		while (n % i == 0)
		{
			count++;
			n /= i;
		}
		if (count > 1)
			cout << i << "^" << count<<"*";
		else if (count > 0)
			cout << i << "*";
	}
}
int main()
{
	int n;
	cin >> n;
	divisorAnalysis(n);
}

