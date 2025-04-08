#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(vector<int> num_list)
{
    stringstream even;
    stringstream odd;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even << to_string(num_list[i]);
        }
        else
        {
            odd << to_string(num_list[i]);
        }
    }
    return stoi(even.str()) + stoi(odd.str());
}