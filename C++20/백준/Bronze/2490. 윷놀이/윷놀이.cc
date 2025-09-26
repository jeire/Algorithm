//#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, sum[3];
    string b[3];
    for (int i = 0; i < 3; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> a;
            sum[i] += a;
        }
        
        if (sum[i] == 4)
        {
            b[i] = "E";
        }
        else if (sum[i] == 3)
        {
            b[i] = "A";
        }
        else if (sum[i] == 2)
        {
            b[i] = "B";
        }
        else if (sum[i] == 1)
        {
            b[i] = "C";
        }
        else  // sum == 0
        {
            b[i] = "D";
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << "\n";
    }
    return 0;
}
