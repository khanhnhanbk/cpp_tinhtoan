#include <iostream>

using namespace std;

int main()
{
    /*
    Concept:
    n = 123456
    n / 10 => 12345  345234 sum += abs(digit - digit2)
    n / 10 => 1234
    n / 10 => 123
    n / 10 => 12
    n / 10 => 1
    n / 10 => 0
    */

    cout << "n = ";
    int n;
    cin >> n;

    int digit;

    int digit2 = n % 10; // khoi tao gia tri ban dau cho digit2
    n = n / 10;

    int sum = 0;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        // TODO: something
        cout << sum << ' ';
        sum = sum + abs(digit - digit2);        
        digit2 = digit;
    }

    // TODO: cout << something
    cout << sum;
    return 0;
}