// fn = 3 * a - 2 * b
// fn = (3) * a + (-2) * b
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "n = ";
    int n;
    cin >> n;



    if (n < 1)
    {
        cout << "Invalid";
    }
    else if (n == 1)
    {
        cout << 1;
    }
    else if (n == 2)
    {
        cout << 2;
    }
    else 
    {
        int f_n1 = 2; // f2 // f(n-1)
        int f_n2 = 1; // f1    f(n-2)

        int f;
        for (int i = 3; i <= n; i++) // index 4
        {
            f = (3) * f_n1 + (-2) * f_n2 ; // f4
            f_n2 = f_n1; // f2
            f_n1 = f; // f3
        }

        cout << f;
    }

    return 0;
}