#include <string>
#include <vector>

using namespace std;

string solution(string my_str, string overwrite_str, int s) {
    string answer = my_str.substr(0, s) + overwrite_str + my_str.substr(s + overwrite_str.size());
    return answer;
}