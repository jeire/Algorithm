#include <string>
#include <vector>

using namespace std;

string solution(string my_str, string overwrite_str, int s) {
    return my_str.substr(0, s) + overwrite_str + my_str.substr(s + overwrite_str.size());
}