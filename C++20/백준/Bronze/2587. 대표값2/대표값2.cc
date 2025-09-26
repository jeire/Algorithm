#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[5];
    int sum = 0;
    int b = -1;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 5);

    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    cout << sum / 5 << "\n";
    cout << a[2];
    return 0;
}
