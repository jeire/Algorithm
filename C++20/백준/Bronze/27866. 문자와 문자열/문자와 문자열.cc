#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string ss;
    int i;
    cin >> ss;
    cin >> i;
    cout << ss[i-1];
    return 0;
}