#include <iostream>

using namespace std;

int main()
{
    // input n
    cout << "n = ";
    int n;
    cin >> n;


    int S = 1;

    if (n % 2 == 0)
    {
        int i = 2;
        while (i <= n )
        {
            S  = S * i;
            i = i+2;
        }
    }
    else 
    {
        int i = 1;
        while (i <= n )
        {
            S  = S * i;
            i = i+2;
        }
    }
    // output
    cout << "S = " << S << endl;
    return 0;
}