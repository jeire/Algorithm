#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<int> iSet;
    int iArr[10]{};

    for (int x = 0; x < 10; x++)
    {
        cin >> iArr[x];
        iSet.insert(iArr[x] % 42);
    }

    cout << iSet.size();
    return 0;
}