// 3*x + 2*y + z== n
// x = (0 -> n)
// x :  y = (0 -> n)
//  (0,0) => (0,1) => ... => (0,n) => (1,0) => (1,1) => .. (n,n)
#include <iostream>

using namespace std;

int main()
{
    // input n
    cout << "n = ";
    int n;
    cin >> n;

    int x, y;
    x = 0;
    while (x <= n) // x
    {
        // ung voi moi x thi y: 0 -> n
        y = 0;
        while (y <= n) // y
        {
            if (2 * x + y == n)
            {
                // (x,y) = (5,7)
                cout << "(x, y) = ( " << x << ',' << y << ")" << endl;
            }
            y++;
        }
        x++;
    }
    cout << x << ',' << y;
    return 0;
}