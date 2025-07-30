using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        double[] a = s.Length > 0 ? Array.ConvertAll(s, double.Parse) : new double[2];
        Console.WriteLine(a[0] / a[1]);
    }
}