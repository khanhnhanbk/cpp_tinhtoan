#include <iostream>
#include <math.h>
using namespace std;
// n tim x < n sao cho x % 5 == 0, x lon nhat
int main()
{
    // input n
    cout << "n = ";
    int n;
    cin >> n;

    // //  S
    // float S = 0;
    // int x = 0;
    // while (S < n)
    // {
    //     S = S + sqrt(x);
    //     x++;
    // }

    // cout << (x - 1);
    int x = n-1;
    while (!(x % 5 == 0))
    {
        x--;
    }

    // Fibbonassi
    // truy hoi tuyen tinh 

    cout << x;
    return 0;
}