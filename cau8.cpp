#include <iostream>

using namespace std;

int main()
{
    // 123456
    // n / 10 => 12345
    // n / 10 => 1234
    // n / 10 => 123
    // n / 10 => 12
    // n / 10 => 1
    // n / 10 => 0
    cout << "n = ";
    int n;
    cin >> n;
    int dem;
    dem = 0;
    int digit;
    int sum = 0;
    while ((n != 0))
    {
        digit = n % 10;
        n = n / 10;
        dem++;
    }
    // cout << sum;
    cout << dem;
    return 0;
}