/*
   Kiểm tra xem số vừa nhập có toàn chữ số chẵn hay không
*/
#include<iostream>


using namespace std;
int checkNumber(int n)
{
    int check = 0;
    while (n > 0) {
        int tmp = n % 10;
        if (n % 2 != 0) {
            check = 1;
            break;
        }
        n /= 10;
    }
    return check;
}
int main()
{
    int n;
    cin >> n;
    if (checkNumber(n) == 1)
        cout << "no";
    else
        cout << "yes";
}