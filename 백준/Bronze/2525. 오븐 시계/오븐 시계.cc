#include <iostream>

using namespace std;
int main()
{
    int h, m, t;
    cin >> h >> m;
    cin >> t;
    
    if (t + m < 60)
        cout << h << " " << m + t;
    else
    {
        int sum = m + t;
        cout << (h + sum / 60) % 24 << " " << sum % 60;
    }
}