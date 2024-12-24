using System;

public class Solution {
    public int solution(int[] sides) {
        int sum = sides[0] + sides[1] + sides[2];
        foreach (int side in sides)
        {
            if((sum - 1) / 2 + 1 <= side)
            {
                return 2;
            }
        }
        return 1;
    }
}