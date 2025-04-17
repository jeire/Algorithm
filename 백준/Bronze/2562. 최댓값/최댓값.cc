#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, a = 0, b = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> m;
        if (m > a)
        {
            a = m;
            b = i + 1;
        }
    }
    cout << a << "\n";
    cout << b << "\n";
}