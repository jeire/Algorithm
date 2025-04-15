#include <iostream>

using namespace std;
int main()
{
    int result, count, cost, num;
    int sum = 0;
    cin >> result;
    cin >> count;
    while (count > 0)
    {
        cin >> cost >> num;
        sum += cost * num;
        count--;
    }
    
    cout << (result == sum ? "Yes" : "No");
    return 0;
}