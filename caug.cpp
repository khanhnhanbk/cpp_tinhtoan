#include <iostream>

using namespace std;

int main()
{
    // input n
    cout << "n = ";
    int n;
    cin >> n;

    float S;
    S = 0;

    int M = 1; // 1! 2! 3!

    int i = 1;

    while (i <= n) // i = 2 (n! * (n+1) = (n+1)!)
    {
        if (i % 2 == 0)
        {
            S = S - 1.0 / M;
        }
        else // i % 2 != 0
        {
            S = S + 1.0 / M;
        }
        M = M * (i+1);
        i++;
    }
    cout << "S = " << S << endl;
    return 0;
}