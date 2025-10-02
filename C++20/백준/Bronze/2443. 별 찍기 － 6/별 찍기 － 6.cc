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
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        int odd = 2 * (n - i) - 1;
        for (int j = odd; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}