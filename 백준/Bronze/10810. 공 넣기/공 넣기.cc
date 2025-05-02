#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i, j, k;
    cin >> n >> m;
    int iArr[100];
    for (int x = 0; x < n; x++)
    {
        iArr[x] = 0;
    }

    for (int x = 0; x < m; x++)
    {
        cin >> i >> j >> k;
        for (int y = i - 1; y <= j - 1; y++)
        {
            iArr[y] = k;
        }
    }

    for (int x = 0; x < n; x++)
    {
        cout << iArr[x] << " ";
    }
    return 0;
}