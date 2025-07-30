using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        int[] a = s.Length > 0 ? Array.ConvertAll(s, int.Parse) : new int[2];
        if (a[1] < 45)
        {
            a[1] += 15;
            a[0] -= 1;
            if (a[0] < 0)
            {
                a[0] = 23;
            }
        }
        else
        {
            a[1] -= 45;
        }
        Console.WriteLine($"{a[0]} {a[1]}");
    }
}