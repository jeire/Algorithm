using System;

public class Solution {
    public int solution(int n) {
        //약수의 개수를 구하는 문제와 동일하게 풀이 가능하다.
        int answer = Math.Sqrt(n) % 1 == 0 ? 1 : 0;
        for (int i = 1; i < Math.Sqrt(n); i++)
        {
            if (n % i == 0)
            {
                answer += 2;
            }
        }
        return answer;
    }
}