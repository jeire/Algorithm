#include <string>
#include <vector>
#include <sstream>

using namespace std;
std::ostringstream oss;

string solution(string code) {
    int mode = 0;
    for (int i = 0; i < code.size(); i++)
    {
        if (code[i] == '1')
        {
            mode = !mode;
        }
        else if (mode && (i % 2))
        {
            oss << code[i];
        }
        else if (!mode && !(i % 2))
        {
            oss << code[i];
        }
    }
    string answer = oss.str();
    return answer.size() != 0 ? answer : "EMPTY";
}