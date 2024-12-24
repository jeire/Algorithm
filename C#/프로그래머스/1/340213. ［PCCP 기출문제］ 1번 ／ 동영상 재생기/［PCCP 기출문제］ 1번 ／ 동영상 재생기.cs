using System;

public class Solution
{
    public string solution(string video_len, string pos, string op_start, string op_end, string[] commands)
    {
        int time = ConvertToInt(pos);
        int VEd = ConvertToInt(video_len);
        int OpSt = ConvertToInt(op_start);
        int OpEd = ConvertToInt(op_end);
        
        for(int i = 0; i < commands.Length; i++)
        {
            time = DoCmd(time, commands[i], VEd, OpSt, OpEd);
        }
        time = ToOpEnd(time, OpSt, OpEd);
        return ConvertToStr(time);
    }
    
    private string ConvertToStr(int time)
    {
        int mm = time / 60;
        int ss = time % 60;
        return $"{mm.ToString("00")}:{ss.ToString("00")}";
    }
    
    private int ConvertToInt(string time)
    {
        string[] str = time.Split(':');
        return int.Parse(str[0]) * 60 + int.Parse(str[1]);
    }
    
    private int DoCmd(int time, string cmd, int length, int OpSt, int OpEd)
    {
        time = ToOpEnd(time, OpSt, OpEd);
        time += cmd.Equals("next") ? 10 : -10;
        if (time < 0)
            return 0;
        if (time > length)
            return length;
        return time;
    }
    
    private int ToOpEnd(int time, int OpSt, int OpEd)
    {
        if (time <= OpEd && time >= OpSt)
            return OpEd;
        return time;
    }
}