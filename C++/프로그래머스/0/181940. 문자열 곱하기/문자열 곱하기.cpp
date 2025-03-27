#include <string>
#include <vector>
#include <sstream>

using namespace std;
std::ostringstream oss;

string solution(string my_string, int k) {
    for (int i = 0; i < k; i++)
    {
        oss << my_string;
    }
    return oss.str();
}