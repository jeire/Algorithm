//#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    string ss;
    cin >> ss;

    for (int i = 'a'; i <= 'z'; i++)
    {
        a = -1;
        for (int j = 0; j < ss.size(); j++)
        {
            if (ss[j] == i)
            {
                a = j;
                break;
            }
        }
        cout << a << " ";
    }
    return 0;
}