#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    // i uoc so => n % i == 0
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            // TODO something
            dem++;
        }
    }

    // TODO: cout something
    cout << dem;
    return 0;
}

// 5! = 120