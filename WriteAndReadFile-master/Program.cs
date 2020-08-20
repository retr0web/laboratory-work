using System;
using System.IO;
namespace ReadAndWrite
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = QuantityElem();
            int[] array = new int[n];
            InputInArray(ref array);
            WriteToFile(array);
            ReadFile();
        }

        static int QuantityElem()
        {
            Console.WriteLine("Input size of array (positive number only)");
            int n = Convert.ToInt32(Console.ReadLine());
            if (n < -1)
            {
                Console.WriteLine("Incorrect number! Exiting program");
                System.Environment.Exit(0);
            }
            return n;
        }

        static void InputInArray(ref int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine("Input positive number");
                int number = Convert.ToInt32(Console.ReadLine());
                if (number >= 0)
                    arr[i] = number;
                else
                {
                    Console.WriteLine("Incorrect number! Exiting program");
                    System.Environment.Exit(0);
                }
            }
        }

        static void WriteToFile(int[] arr)
        {
            using System.IO.StreamWriter file = 
                new System.IO.StreamWriter("File.txt");
            for(int i = 0; i < arr.Length; i++)
            {
                file.WriteLine($"{arr[i]}");
            }
            Console.WriteLine("Number exported to file");
            file.Close();
        }

        static void ReadFile()
        {
            string[] lines = System.IO.File.ReadAllLines("File.txt");
            int[] myInts = Array.ConvertAll(lines, s => int.Parse(s));
            int sum = 0;
            for (int i = 0; i < myInts.Length; i++)
            {
                sum += myInts[i];
            }
            Console.WriteLine($"The sum of numbers is: {sum}");
        }
    }
}