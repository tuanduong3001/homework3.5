﻿#include<iostream>
#include<math.h>



using namespace std;
int arr[1000];
bool checkSetUp(int x2, int y2)
{
	for (int i = 1; i < x2; i++) {
		if (arr[i] == y2 || abs(i - x2) == abs(arr[i] - y2))
			return false;
	}
	return true;
}
void output(int n)
{
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void trySet(int i, int n)
{
	for (int j = 1; j <= n; j++) {
		if (checkSetUp(i, j)) {
			arr[i] = j;
			if (i == n) output(n);
			trySet(i + 1, n);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	trySet(1, n);
}