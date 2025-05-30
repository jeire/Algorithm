#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    string ss;
    for (int i = 0; i < a; i++)
    {
        cin >> ss;
        cout << ss[0] << ss[ss.size() - 1] << "\n";
    }
    return 0;
}