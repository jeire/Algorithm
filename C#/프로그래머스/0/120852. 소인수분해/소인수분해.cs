using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
        List<int> prime = new List<int>(5);
        int i = 2;
        while (n > 1)
        {
            if (n % i == 0)
            {   
                if (prime.Count == 0)
                {
                    prime.Add(i);
                }
                else if (prime[prime.Count - 1] != i)
                {
                    prime.Add(i);
                }
                n /= i;
            }
            else
            {
                i++;
            }
        }
        prime.Sort();
        return prime.ToArray();
    }
}