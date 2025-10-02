#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[20], N, m = 0, y = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        y += (a[i] / 30 + 1) * 10;
        m += (a[i] / 60 + 1) * 15;
    }

    if (y < m)
    {
        cout << "Y " << y;
    }
    else if (m < y)
    {
        cout << "M " << m;
    }
    else
    {
        cout << "Y M " << y;
    }
    return 0;
}
