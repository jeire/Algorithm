using System;

public class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        for (int i = 0; i < array.Length; i++)
        {
            answer += n == array[i] ? 1 : 0;
        }
        return answer;
    }
}