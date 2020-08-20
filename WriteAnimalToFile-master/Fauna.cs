using System;

namespace laba10
{
    public class Fauna
    {
        public string Name;
        public double Length;
        public double Weight;

        public Fauna(string name = "animal", double length = 0, double weight = 0)
        {
            while (name.Length > 30)
            {
                Console.WriteLine("Name is too long! Input name that is not larger than 30 characters.");
                name = Console.ReadLine();
            }
            Name = name;
            while (length < 0)
            {
                Console.WriteLine("Length is too short! Input length that is larger than 0");
                length = Convert.ToDouble(Console.ReadLine());
            }
            Length = length;
            while (weight < 0)
            {
                Console.WriteLine("Weight is too short! Input weight that is larger than 0");
                weight = Convert.ToDouble(Console.ReadLine());
            }
            Weight = weight;
        }
        
        void Output()
        {
            Console.WriteLine($"Name: {Name}");
            Console.WriteLine($"Length: {Length}");
            Console.WriteLine($"Weight: {Weight}");
        }
    }
}