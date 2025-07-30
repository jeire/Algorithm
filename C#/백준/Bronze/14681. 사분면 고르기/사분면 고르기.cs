using System;

class Program
{
    static void Main()
    {
        int.TryParse(Console.ReadLine(), out int a);
        int.TryParse(Console.ReadLine(), out int b);
        if (a > 0)
        {
            if (b > 0)
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(4);
            }
        }
        else
        {
            if (b > 0)
            {
                Console.WriteLine(2);
            }
            else
            {
                Console.WriteLine(3);
            }
        }
    }
}