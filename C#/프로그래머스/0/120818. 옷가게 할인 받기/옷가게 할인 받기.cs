using System;

public class Solution {
    public int solution(int price) {
        float tmp = price >= 500000 ? price * (float)0.8 : price >= 300000 ? price * (float)0.9 : price >= 100000 ? price * (float)0.95 : price;
        return (int)tmp;
    }
}