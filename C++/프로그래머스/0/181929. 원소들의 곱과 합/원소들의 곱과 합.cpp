#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    unsigned int mul = 1;
    unsigned int sum = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        mul *= num_list[i];
        sum += num_list[i];
    }
    return mul < sum * sum;
}