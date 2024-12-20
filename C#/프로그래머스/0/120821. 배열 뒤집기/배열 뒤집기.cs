using System;

public class Solution {
    public int[] solution(int[] num_list) {
        int i2 = num_list.Length - 1;
        int tmp = -1;
        for (int i1 = 0; i1 < i2;)
        {
            tmp = num_list[i1];
            num_list[i1] = num_list[i2];
            num_list[i2] = tmp;
            i1++;
            i2--;
        }
        return num_list;
    }
}