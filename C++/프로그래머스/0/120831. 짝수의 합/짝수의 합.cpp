using namespace std;

int solution(int n) {
    if (n % 2 != 0)
    {
        n = n - 1;
    }

    int answer = 0;
    while (n > 0)
    {
        answer += n;
        n -= 2;
    }
    return answer;
}