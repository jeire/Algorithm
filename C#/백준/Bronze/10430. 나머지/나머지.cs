using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        int[] a = Array.ConvertAll(s, int.Parse);
        Console.WriteLine($"{(a[0] + a[1]) % a[2]}\n{(a[0] % a[2] + a[1] % a[2]) % a[2]}\n{a[0] * a[1] % a[2]}\n{(a[0] % a[2]) * (a[1] % a[2]) % a[2]}");
    }
}