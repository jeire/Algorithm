using System;

class Program
{
    static void Main()
    {
        int.TryParse(Console.ReadLine(), out int a);
        if (a % 4 == 0)
        {
            if (a % 100 == 0)
            {
                if (a % 400 == 0)
                {
                    Console.WriteLine(1);
                    return;
                }
                Console.WriteLine(0);
                return;
            }
            Console.WriteLine(1);
            return;
        }
        Console.WriteLine(0);
    }
}