#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    // i uoc so => n % i == 0
    // so nguyen so => co dung 2 uoc (1,n)
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
    if (dem == 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}