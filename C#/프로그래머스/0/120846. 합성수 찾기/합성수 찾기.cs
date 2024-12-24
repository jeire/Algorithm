using System;

public class Solution {
    public int solution(int n) {
        bool[] bArr = new bool[n + 1];
        for (int i = 0; i <= n; i++)
        {
            bArr[i] = true;
        }
        
        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; i * j <= n; j++)
            {
                bArr[i * j] = false;
            }
        }
        
        int answer = 0;
        foreach (bool item in bArr)
        {
            answer += item ? 0 : 1;
        }
        return answer;
    }
}