#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int i = n - 1; // bien dem
    float S = n;   // bien tong

    while (i >= 1) // i > 0
    {
        S = 1.0 / S + i;
        i--;
    }

    cout << "S = " << S;
    return 0;
}