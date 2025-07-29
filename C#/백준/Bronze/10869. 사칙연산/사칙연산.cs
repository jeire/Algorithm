using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        int[] a = s.Length > 0 ? Array.ConvertAll(s, int.Parse) : new int[2];
        Console.WriteLine(a[0] + a[1]);
        Console.WriteLine(a[0] - a[1]);
        Console.WriteLine(a[0] * a[1]);
        Console.WriteLine(a[0] / a[1]);
        Console.WriteLine(a[0] % a[1]);
    }
}