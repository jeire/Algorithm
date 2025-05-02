#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i;
    int iArr[31]{};
    /*for (int x = 0; x <= 31; x++)
    {
        iArr[x] = 0;
    }*/

    for (int x = 0; x < 28; x++)
    {
        cin >> i;
        iArr[i] = 1;
    }

    for (int x = 1; x <= 30; x++)
    {
        if (iArr[x] == 0)
        {
            cout << x << "\n";
        }
    }
    return 0;
}