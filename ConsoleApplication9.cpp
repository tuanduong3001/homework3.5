#include<stdio.h>
int main()
{
	char x;
	scanf_s("%c", &x);
	if (x <= 'Z' && x >= 'A')
		printf("%c", x + 32);
	if (x <= 'z' && x >= 'a')
		printf("%c", x - 32);
}