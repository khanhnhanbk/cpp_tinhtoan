#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    // i uoc so => n % i == 0
    int i = 2;
    while (n > 1)
    {
        while (n % i == 0) 
        {
            cout << i << ' ';
            n = n/i;
        }
        i++;
    }
    
    return 0;
}