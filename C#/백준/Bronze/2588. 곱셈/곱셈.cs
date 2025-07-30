using System;

class Program
{
    static void Main()
    {
        int.TryParse(Console.ReadLine(), out int a);
        int.TryParse(Console.ReadLine(), out int b);
        int temp = b;
        while (b > 0)
        {
            Console.WriteLine(b % 10 * a);
            b /= 10;
        }
        Console.WriteLine(a * temp);
    }
}