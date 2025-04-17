#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a = 1000001, b = -1000001, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a = x < a ? x : a;
        b = x > b ? x : b;
    }
    cout << a << ' ' << b;
}