#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    for (int e : a)
    {
        cout << e << " ";
    }
    return 0;
}
