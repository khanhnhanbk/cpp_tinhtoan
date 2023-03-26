#include <iostream>

using namespace std;

int main()
{
    /*
    Concept:
    n = 10000 => 1
    n / 10 => 12345     0*10 + 5 = 5
    n / 10 => 1234      5*10 + 4 = 50 + 4 = 54
    n / 10 => 123       54*10 + 3 = 543
    n / 10 => 12
    n / 10 => 1
    n / 10 => 0            54321* 10 = 54321
    */
    
    cout << "n = ";
    int n;
    cin >> n;
    
    int n_init = n;

    int digit;

    int n_rev = 0;

    while (n != 0)
    {
        digit = n % 10; 
        n = n / 10;
        // TODO: something
        n_rev = n_rev * 10 + digit;
    }

    // TODO: cout << something

    if (n_init == n_rev)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }

    return 0;
}

