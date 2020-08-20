using System;

namespace laba10
{
    public class Bird : Fauna
    {
        public double Wings;
        public double HeightFlight;
        
        public Bird(string name = "animal", double length = 0, double weight = 0, double wings = 1, double height = 0)
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
            while (wings < 0)
            {
                Console.WriteLine("Wings are too short! Input wings that are larger than 0");
                wings = Convert.ToDouble(Console.ReadLine());
            }
            Wings = wings;
            while (height < 0)
            {
                Console.WriteLine("Height of flight is too short! Input height of flight that is larger than 0");
                height = Convert.ToDouble(Console.ReadLine());
            }
            HeightFlight = height;
        }

        void Output()
        {
            Console.WriteLine($"Name: {Name}");
            Console.WriteLine($"Length: {Length}");
            Console.WriteLine($"Weight: {Weight}");
            Console.WriteLine($"Wings: {Wings}");
            Console.WriteLine($"Height of flight: {HeightFlight}");
        }
    }
}