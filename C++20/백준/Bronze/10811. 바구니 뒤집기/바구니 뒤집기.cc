#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a, b, arr[101];
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        reverse(arr + a, arr + b + 1);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}