#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string str1 = n % 2 == 0 ? " is even" : " is odd";
    cout << n << str1;
    return 0;
}