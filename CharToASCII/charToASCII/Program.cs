using System;
using System.Text;

namespace charToASCII
{
    class Program
    {
        static void Main(string[] args)
        {
            Encoding ascii = Encoding.ASCII;
            Console.WriteLine("Enter sequence of characters:");
            Byte[] convertedAscii = ascii.GetBytes(Console.ReadLine());
            foreach (Byte character in convertedAscii)
                Console.Write(character < 100 ? "[{0,1:D3}]" : "[{0}]", character);
        }
    }
}