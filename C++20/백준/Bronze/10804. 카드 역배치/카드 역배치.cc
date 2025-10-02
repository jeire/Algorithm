#include <iostream>
using namespace std;

int card[21];

void reverse(int a, int b)
{
    while (a < b)
    {
        swap(card[a++], card[b--]);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 21; i++)
    {
        card[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        int a, b;
        cin >> a >> b;
        reverse(a, b);
    }

    for (int i = 1; i < 21; i++)
    {
        cout << card[i] << " ";
    }
    return 0;
}
