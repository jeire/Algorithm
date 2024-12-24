using System;

public class Solution {
    public int solution(int[] array, int n) {
        Array.Sort(array);
        for (int i = 0; i < array.Length; i++)
        {
            if (n < array[i])
            {
                if (i == 0)
                {
                    return array[0];
                }
                else
                {
                    return n - array[i - 1] <= array[i] - n ? array[i - 1] : array[i];
                }
            }
        }
        return array[array.Length - 1];
    }
}