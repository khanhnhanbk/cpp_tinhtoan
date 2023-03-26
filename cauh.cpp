#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // input n
    cout << "n = ";
    int n;
    cin >> n;

    float S;
    S = 1;
    int i =2;

    while ( i <= n)
    {
        if (n % 2 == 0)
        {
            S = S * (1+ 1.0 / sqrt(i));
        }
        else{

             S = S * (1- 1.0 / sqrt(i));
        }

        i++; // increase statement
    }
    // for (int i = 2; i <= n; i++)
    // {
    //     if (n % 2 == 0)
    //     {
    //         S = S * (1 + 1.0 / sqrt(i));
    //     }
    //     else
    //     {

    //         S = S * (1 - 1.0 / sqrt(i));
    //     }
    // }

    // output
    cout << "S = " << S << endl;
    return 0;
}

//  S = (S % M + X % M) % M
// X = X * k