#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    int sum = 0;
    string ss;
    cin >> a;
    cin >> ss;
    for (int i = 0; i < a; i++)
    {
        sum += ss[i] - '0';
    }
    cout << sum;
    return 0;
}