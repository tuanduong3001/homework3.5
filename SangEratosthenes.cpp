#include<iostream>


using namespace std;
void sieveOfEratosthenes(int n)
{
    int flag[2000];
    // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
    for (int i = 2; i <= n; i++) {
        flag[i] = 0;
    }

    // Thuật toán sàng nguyên tố
    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for (int i = 2; i <= n; i++) {
        if (flag[i] == 0) {
            for (int j = 2 * i; j <= n; j += i) {
                flag[j] = 1;
            }
        }
    }
    // In ra các số là số nguyên tố
    for (int i = 2; i <= n; i++) {
        if (flag[i] == 0) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cin >> n;
    sieveOfEratosthenes(n);
}