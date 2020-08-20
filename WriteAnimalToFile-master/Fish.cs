using System;

namespace laba10
{
    public class Fish : Fauna
    {
        public double Deep;

        public Fish(string name = "animal", double length = 0, double weight = 0, double deep = 0.1)
        {
            while (name.Length > 30)
            {
                Console.WriteLine("Name is too long! Input name that is not larger than 30 characters.");
                name = Console.ReadLine();
            }
            this.Name = name;
            while (length < 0)
            {
                Console.WriteLine("Length is too short! Input length that is larger than 0");
                length = Convert.ToDouble(Console.ReadLine());
            }
            this.Length = length;
            while (weight < 0)
            {
                Console.WriteLine("Weight is too short! Input weight that is larger than 0");
                weight = Convert.ToDouble(Console.ReadLine());
            }
            this.Weight = weight;
            while (deep < 0)
            {
                Console.WriteLine("Deep height is too short! Input deep height that is larger than 0");
                deep = Convert.ToInt32(Console.ReadLine());
            }
            Deep = deep;
        }
        
        void Output()
        {
            Console.WriteLine($"Name: {Name}");
            Console.WriteLine($"Length: {Length}");
            Console.WriteLine($"Weight: {Weight}");
            Console.WriteLine($"Deepest dive in metres: {Deep}");
        }
    }
}