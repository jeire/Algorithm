#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int height[9], result[7];

    for (int i = 0; i < 9; i++)
    {
        cin >> height[i];
    }

    // brute force
    for (int a = 0; a < 8; a++)
    {
        int sum = 0;

        for (int b = a + 1; b < 9; b++)
        {
            sum = 0;

            for (int c = 0, d = 0; c < 9; c++)
            {
                if (c != a && c != b)
                {
                    sum += height[c];
                    result[d++] = height[c];
                }
            }

            if (sum == 100)
            {
                break;
            }
        }

        if (sum == 100)
        {
            break;
        }
    }

    sort(result, result + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}
