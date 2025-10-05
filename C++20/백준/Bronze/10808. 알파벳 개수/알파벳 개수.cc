#include <iostream>
#include <string>
using namespace std;

int main()
{
    int counts[26] = {0};
    string userString;
    
    cin >> userString;
    
    // char 값에 'a'를 빼면 0 ~ 25의 값이 되므로 index로 사용 가능함
    for (char c : userString)
    {
        counts[c - 'a']++;  // 빈도 + 1
    }
    
    for (int i : counts)
    {
        cout << i << " ";
    }    
    return 0;
}