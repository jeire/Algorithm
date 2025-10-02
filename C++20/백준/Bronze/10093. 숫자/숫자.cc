#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, temp;
    cin >> a >> b;


    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }

    if (b - a < 2)
    {
        cout << 0;
    }
    else
    {
        cout << b - a - 1 << "\n";
        for (long long i = a + 1; i < b; i++)
        {
            cout << i << " ";
        }
    }
    return 0;
}
