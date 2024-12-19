using System;

public class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int numer = numer1 * denom2 + numer2 * denom1;
        int denom = denom1 * denom2;
        int gcd = CalcGCD(numer, denom);
        int[] answer = new int[] {numer / gcd, denom / gcd};
        return answer;
    }
    
    public int CalcGCD(int num1, int num2)
    {
        if (num1 < num2)  // 항상 num1이 num2보다 크도록 변경
        {
            int tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
        
        int remain = -1;
        while(num2 != 0)
        {
            remain = num1 % num2;
            num1 = num2;
            num2 = remain;
        }
        return num1;
    }
}