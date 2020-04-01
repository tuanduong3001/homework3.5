#include<iostream>



using namespace std;
void input(float arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
float findNegaMax(float arr[], int n)
{
	float max = -9999999;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max&& arr[i] < 0)
		{
			max = arr[i];
			count++;
		}
	}
	if (count == 0)
		return 0;
	else
		return max;
}
int main()
{
	int n;
	cin >> n;
	float arr[1000];
	input(arr, n);
	cout << findNegaMax(arr, n);
}