#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m)
{
    if (eq == "=" && n == m)
    {
        return 1;
    }
    else if (ineq == ">" && n > m)
    {
        return 1;
    }
    else if (ineq == "<" && n < m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}