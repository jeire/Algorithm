#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a, b, c;
    set<int> s;
    cin >> a >> b >> c;
    s.insert(a);
    s.insert(b);
    s.insert(c);

    if (s.size() == 1) cout << 10000 + 1000 * c;
    else if (s.size() == 3) cout << 100 * *s.rbegin();
    else if (a == c || b == c) cout << 1000 + 100 * c;
    else cout << 1000 + 100 * a;
    return 0;
}