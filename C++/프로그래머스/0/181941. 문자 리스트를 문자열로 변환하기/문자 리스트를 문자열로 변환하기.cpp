#include <string>
#include <vector>
#include <sstream>

using namespace std;
std::ostringstream oss;

string solution(vector<string> arr) {
    for (int i = 0; i < arr.size(); i++)
    {
        oss << arr[i];
    }
    return oss.str();
}