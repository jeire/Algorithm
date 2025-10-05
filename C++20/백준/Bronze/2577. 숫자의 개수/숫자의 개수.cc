#include <iostream>
using namespace std;

int main()
{
    int a, b, c, multiple, digits[10] = {0};
    cin >> a >> b >> c;
    multiple = a * b * c;
    while (true)
    {
        // 0이면 반복을 중단한다.
        if (multiple <= 0)
        {
            break;
        }
        
        // 0보다 크면 나머지를 digits에 카운트한다.
        // 제일 작은 자리의 숫자부터 검사한다.
        digits[multiple % 10]++;
        multiple /= 10;
    }
    
    for (int i : digits)
    {
        cout << i << "\n";
    }
    return 0;
}