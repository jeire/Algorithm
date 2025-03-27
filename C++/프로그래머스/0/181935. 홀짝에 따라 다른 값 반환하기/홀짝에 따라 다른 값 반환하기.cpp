#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n % 2)
    {
        return (n / 2 + 1) * (n / 2 + 1);
    }
    else
    {
        return 4 * (n / 2) * (n / 2 + 1) * (n + 1) / 6;
    }
}