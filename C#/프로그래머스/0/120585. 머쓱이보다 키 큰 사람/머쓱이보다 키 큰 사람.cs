using System;

public class Solution {
    public int solution(int[] array, int height) {
        int answer = 0;
        foreach (int key in array)
        {
            if (height  < key)
            {
                answer++;  
            }
        }
        return answer;
    }
}