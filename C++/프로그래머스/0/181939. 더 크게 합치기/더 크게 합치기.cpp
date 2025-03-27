#include <string>
#include <vector>
#include <string>

using namespace std;

int solution(int a, int b) {
    string stra = to_string(a);
    string strb = to_string(b);
    string strAB = stra + strb;
    string strBA = strb + stra;
    
    return stoi(strAB) >= stoi(strBA) ? stoi(strAB) : stoi(strBA);
}