#include <iostream>

using namespace std;
int main()
{
    int a, b, temp;
    cin >> a;
    cin >> b;
    temp = b;

    while (b > 0)
    {
        cout << b % 10 * a << "\n";
        b /= 10;
    }
    cout << a * temp;
    return 0;
}