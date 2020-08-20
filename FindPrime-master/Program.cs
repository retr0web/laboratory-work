using System;

namespace FindPrime
{
    internal class Program
    {
        public static bool isPrime(int n)
        {
            for (int i = 2; i < Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                    return false;
            }

            return true;
        }

        public static void PrintFromRange(int from, int to)
        {
            for (int i = from; i < to; i++)
            {
                if (isPrime(i))
                {
                    Console.Write($"{i}  ");
                }
            }
        }

        public static void Main(string[] args)
        {
            PrintFromRange(1907, 1972);
        }
    }
}