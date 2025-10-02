#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> num[i];
    }
    cout << *max_element(num, num + 9) << "\n";
    cout << max_element(num, num + 9) - num + 1;
    return 0;
}
