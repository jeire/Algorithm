#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    string ss;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> ss;
        for (int j = 0; j < ss.size(); j++)
        {
            for (int k = 0; k < b; k++)
            {
                cout << ss[j];
            }
        }
        cout << "\n";
    }
    return 0;
}