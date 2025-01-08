using System;
using System.Text;

public class Solution {
    public string solution(string my_string) {
        StringBuilder reversed = new StringBuilder();

        for (int i = my_string.Length - 1; i >= 0; i--)
        {
            reversed.Append(my_string[i]);
        }
        return reversed.ToString();
    }
}