#include <iostream>

using namespace std;

int main()
{
    /*
    Concept:
    n = 123456
    n / 10 => 12345  345234 sum += abs(digit - digit2)
    n / 10 => 1234
    n / 10 => 123
    n / 10 => 12
    n / 10 => 1
    n / 10 => 0
    */

    cout << "n = ";
    int n;
    cin >> n;

    int left;

    int right = n % 10; // khoi tao gia tri ban dau cho digit2
    n = n / 10;

    int flag = 1; // YES 

    while (n != 0)
    {
        left = n % 10;
        n = n / 10;
        // TODO: something
        // 12343
        if (left > right) // sai => bat loi (flag)
        {
            flag = 0;
        }
        // dung bo qua
        right = left;
    }

    // TODO: cout << something
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}