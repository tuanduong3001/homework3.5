#include<iostream>



using namespace std;
void input(float arr[], int& n)
{
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
int locNega(float arr[], int n)
{
	float max = -999999;
	int loc = 0, count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max&& arr[i] < 0) {
			max = arr[i];
			loc = i;
			count++;
		}
	}
	if (count == 0)
		return -1;
	else
		return loc;
}
int main()
{
	int n;
	cin >> n;
	float arr[1000];
	input(arr, n);
	cout << locNega(arr, n);
}