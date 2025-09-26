#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[7];
    int sum = 0;
    int b = -1;

    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 7);

    for (int i = 6; i >= 0; i--)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
            b = i;
        }
    }

    if (b == -1)
    {
        cout << b;
    }
    else
    {
        cout << sum << "\n" << a[b];
    }
    return 0;
}
