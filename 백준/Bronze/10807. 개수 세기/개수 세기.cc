#include <iostream>

using namespace std;
int main()
{
    int n, v, cnt = 0;
    cin >> n;
    int* iArr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> iArr[i];
    }
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        cnt += v == iArr[i] ? 1 : 0;
    }
    cout << cnt;
    return 0;
}