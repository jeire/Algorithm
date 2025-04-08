#include <iostream>

using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    
    cout.precision(12);  // 출력 자릿수 지정
    cout << fixed;     // precision이 소수점 아래 갯수만 세도록 지정
    cout << a / b;
    return 0;
}