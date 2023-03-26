//  1 + 1 / (2 + 1/ (3 + ... + 1/n))
// 1/2 + 2/3
#include <iostream>

using namespace std;

int main()
{
    // input n
    cout << "n = ";
    int n;
    cin >> n;
    float S = n; // 5
    // for (int i = n-1; i > 0; i--)
    // {
    //     S = i + 1.0 / S;
    // }
    int i = n-1;
    while (i > 0)
    {
        S = i + 1.0 / S; // 3 + 1/ ( 4 + 1/5)
        i--; // increase statement 
    }
    cout << "S = " << S << endl;
    return 0;
}