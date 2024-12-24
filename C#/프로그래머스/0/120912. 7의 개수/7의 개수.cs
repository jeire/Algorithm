using System;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int rem = 0;
        for (int i = 0; i < array.Length; i++)
        {
            int num = array[i];
            while(num > 0)
            {
                rem = num % 10;
                if (rem == 7)
                {
                    answer++;
                }
                num /= 10;
            }
        }
        return answer;
    }
}