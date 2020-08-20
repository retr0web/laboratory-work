using System;
using System.Collections;
using System.Collections.Generic;

namespace laba10
{
    class Program
    {
        static List<Bird> birds = new List<Bird>();
        static List<Fish> fishes = new List<Fish>();
        static bool runProgram = true;
        static bool printAvailable = false;
        
        static void Main(string[] args)
        {
            while (runProgram)
            {
                ChooseAction(printAvailable);
            }
        }

        static void ChooseAction(bool print)
        {
            if (print == false)
                CreateAnimal();
            else
            {
                Console.WriteLine("Do you want to create animal, print it to the file or exit program?");
                string input = Console.ReadLine();
                if (input.ToLower() == "create")
                    CreateAnimal();
                else if (input.ToLower() == "print")
                    PrintAnimal();
                else if (input.ToLower() == "exit")
                    ExitProgram();
                else
                {
                    ExitProgram();
                }
            }
        }

        static void CreateAnimal()
        {
            Console.WriteLine("Do you want to create bird or fish?");
            string inputAnimal = Console.ReadLine();

            if (inputAnimal.ToLower() == "bird")
            {
                Console.WriteLine("Input name");
                string name = Console.ReadLine();
                Console.WriteLine("Input length of animal");
                double length = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Input weight of animal");
                double weight = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Input length of wings");
                double wings = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Input height of flight");
                double height = Convert.ToDouble(Console.ReadLine());
                Bird bird = new Bird(name,length,weight,wings,height);
                birds.Add(bird);
                printAvailable = true;
            }
            
            else if (inputAnimal.ToLower() == "fish")
            {
                Console.WriteLine("Input name");
                string name = Console.ReadLine();
                Console.WriteLine("Input length of animal");
                double length = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Input weight of animal");
                double weight = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Input height of deep dive of flight");
                double height = Convert.ToDouble(Console.ReadLine());
                Fish fish = new Fish(name,length,weight,height);
                fishes.Add(fish);
                printAvailable = true;
            }

            else
            {
                Console.WriteLine("Incorrect input! Let's try again");
                CreateAnimal();
            }
        }

        static void PrintAnimal()
        {
            Console.WriteLine("Which animal you would like to print? (bird or fish)");
            string inputAnimal = Console.ReadLine();

            if (inputAnimal.ToLower() == "bird")
            {
                int i = 0;
                foreach (var item in birds)
                {
                    Console.WriteLine($"Name: {item.Name}, index({i})");
                    i++;
                }
                
                Console.WriteLine("Input index of animal to print");
                
                int inputIndex = Convert.ToInt32(Console.ReadLine());
                while (inputIndex > birds.Capacity)
                {
                    Console.WriteLine("Value out of capacity of list! Try again");
                    inputIndex = Convert.ToInt32(Console.ReadLine());
                }

                Bird printItem = birds[inputIndex];
                Console.WriteLine(printItem.Name);
                
                using System.IO.StreamWriter file = 
                    new System.IO.StreamWriter("../../../File.txt");
                file.WriteLine("Type of animal: Bird");
                file.WriteLine($"Name: {printItem.Name}");
                file.WriteLine($"Length: {printItem.Length}");
                file.WriteLine($"Weight: {printItem.Weight}");
                file.WriteLine($"Radius of wings: {printItem.Wings}");
                file.WriteLine($"Height of flight: {printItem.HeightFlight}");
                Console.WriteLine("Data has been written to a file!");
                file.Close();
            }
            
            else if (inputAnimal.ToLower() == "fish")
            {
                int i = 0;
                foreach (var item in fishes)
                {
                    Console.WriteLine($"Name: {item.Name}, index({i})");
                    i++;
                }
                
                Console.WriteLine("Input index of animal to print");
                
                int inputIndex = Convert.ToInt32(Console.ReadLine());
                while (inputIndex > birds.Capacity)
                {
                    Console.WriteLine("Value out of capacity of list! Try again");
                    inputIndex = Convert.ToInt32(Console.ReadLine());
                }

                Fish printItem = fishes[inputIndex];
            
                using System.IO.StreamWriter file = 
                    new System.IO.StreamWriter("../../../File.txt");
                file.WriteLine("Type of animal: Fish");
                file.WriteLine($"Name: {printItem.Name}");
                file.WriteLine($"Length: {printItem.Length}");
                file.WriteLine($"Weight: {printItem.Weight}");
                file.WriteLine($"Deep dive: {printItem.Deep}");
                Console.WriteLine("Data has been written to a file!");
                file.Close();
            }
            
            else
            {
                Console.WriteLine("Incorrect input! Let's try again");
                PrintAnimal();
            }
        }

        static void ExitProgram()
        {
            Environment.Exit(0);
        }
    }
}