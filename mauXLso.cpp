#include <iostream>

using namespace std;

int main()
{
    /*
    Concept:
    n = 123456
    n / 10 => 12345  digit = n % 10;
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
    
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        // TODO: something


    }

    // TODO: cout << something
    return 0;
}