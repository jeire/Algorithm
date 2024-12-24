using System;

public class Solution {
    public int[] solution(int[] array) {
        int index = 0;
        for (int i = 1; i < array.Length; i++)
        {
            if (array[index] < array[i])
            {
                index = i;
            }
        }
        return new int[]{ array[index], index };
    }
}