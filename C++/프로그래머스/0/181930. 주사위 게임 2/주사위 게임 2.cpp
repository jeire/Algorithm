#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int a, int b, int c) {
    set<int> numbers = {a, b, c};
    int answer = a + b + c;
    if (numbers.size() <= 2)
    {
        answer *= a * a + b * b + c * c;
        if (numbers.size() <= 1)
        {
            answer *= a * a * a + b * b * b + c * c * c;
        }
    }
    return answer;
}