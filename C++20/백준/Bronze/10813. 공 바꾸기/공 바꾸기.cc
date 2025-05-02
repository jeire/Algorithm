#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i, j, temp;
    cin >> n >> m;
    int iArr[101];
    for (int x = 0; x <= n; x++)
    {
        iArr[x] = x;
    }

    for (int x = 0; x < m; x++)
    {
        cin >> i >> j;
        temp = iArr[j];
        iArr[j] = iArr[i];
        iArr[i] = temp;
    }

    for (int x = 1; x <= n; x++)
    {
        cout << iArr[x] << " ";
    }
    return 0;
}