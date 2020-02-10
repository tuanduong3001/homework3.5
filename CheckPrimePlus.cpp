#include<iostream>



using namespace std;
int isPrime(int n)
{
	if (n < 2)
		return 0;
	if (n >= 2) {
		if (n % 2 == 0)
			return 0;
		for (int i = 3; i * i <= n; i += 2) {   // i*i<=n tương đương với i<=trunc(sqrt(n)) với trunc là hàm bỏ phần thập phân
			if (n % i == 0)
				return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	if (isPrime(n))
		cout << "yes";
	else
		cout << "no";
}
