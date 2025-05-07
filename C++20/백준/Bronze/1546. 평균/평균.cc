#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, max, arr[1000];
    float avg = 0;
    cin >> m;
    max = -1;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        avg += arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << avg * 100 / max / m;
    return 0;
}