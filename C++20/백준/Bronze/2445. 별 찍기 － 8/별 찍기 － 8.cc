#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        int even = 2 * (n - i - 1);
        for (int j = 0; j < even; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }

        int even = 2 * i;
        for (int j = 0; j < even; j++)
        {
            cout << " ";
        }

        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
