#include <iostream>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[26];
    string ss;
    cin >> ss;

    for (int i = 0; i < 26; i++)
    {
        a[i] = -1; // Initialize all elements to -1
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < ss.size(); j++)
        {
            if (ss[j] == i)
            {
                a[i - 'a'] = j;
                break;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}