#include <string>
#include <vector>
#include <sstream>

using namespace std;
std::ostringstream oss;

string solution(string str1, string str2) {
    for (int i = 0; i < str1.size(); i++)
    {
        oss << str1[i];
        oss << str2[i];
    }
    return oss.str();
}