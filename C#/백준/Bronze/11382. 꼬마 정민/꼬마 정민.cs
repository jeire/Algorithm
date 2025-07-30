using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        ulong[] a = s.Length > 0 ? Array.ConvertAll(s, ulong.Parse) : new ulong[3];
        Console.WriteLine(a[0] + a[1] + a[2]);
    }
}