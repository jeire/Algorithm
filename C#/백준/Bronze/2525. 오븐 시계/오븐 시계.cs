using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        int[] a = s.Length > 0 ? Array.ConvertAll(s, int.Parse) : new int[2];
        int.TryParse(Console.ReadLine(), out int b);
        a[0] = (a[0] + ((a[1] + b) / 60)) % 24;
        a[1] = (a[1] + b) % 60;
        Console.WriteLine($"{a[0]} {a[1]}");
    }
}