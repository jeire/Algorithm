using System;

class Program
{
    static void Main()
    {
        int.TryParse(Console.ReadLine(), out int a);
        Console.WriteLine(a - 543);
    }
}