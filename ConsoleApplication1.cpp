#include<stdio.h>
int main()
{
	float a, b;
	scanf_s("%f%f", &a, &b);
	printf("%.2f", (a + b) * 2);
}