#include<stdio.h>



void input(int arr[][50], int& r, int& c)
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
}
void output(int arr[][50], int r, int c)
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void total(int arr[][50], int arr1[][50], int arr2[][50], int r, int c)
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr2[i][j] = arr[i][j] + arr1[i][j];
		}
	}
}
int main()
{
	int r, c;
	int arr[50][50], arr1[50][50], arr2[50][50];
	printf("nhap hang ");
	scanf_s("%d", &r);
	printf("nhap cot ");
	scanf_s("%d", &c);
	printf("nhap mang 1 \n");
	input(arr, r, c);
	printf("nhap mang 2 \n");
	input(arr1, r, c);
	printf("tinh tong \n");
	total(arr, arr1, arr2, r, c);
	output(arr2, r, c);
}