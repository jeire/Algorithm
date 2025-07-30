using System;

class Program
{
    static void Main()
    {
        string[] s = Console.ReadLine().Split();
        int[] a = s.Length > 0 ? Array.ConvertAll(s, int.Parse) : new int[2];
        if (a[0] > a[1])
        {
            Console.WriteLine(">");
        }
        else if (a[0] < a[1])
        {
            Console.WriteLine("<");
        }
        else
        {
            Console.WriteLine("==");
        }
    }
}