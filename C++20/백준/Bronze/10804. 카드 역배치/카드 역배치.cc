#include <iostream>
using namespace std;

int card[21];

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

        // STL reverse 함수를 이용한 바킹독님 풀이
        reverse(card + a, card + b + 1);
    }

    for (int i = 1; i < 21; i++)
    {
        cout << card[i] << " ";
    }
    return 0;
}
