using System;

public class Solution {
    public int solution(int n) {
        int fact = 1;
        int i = 2;
        while(true)
        {
            fact *= i;
            if (fact > n)
            {
                return i - 1;
            }
            i++;
        }
    }
}