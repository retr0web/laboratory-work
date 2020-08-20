using System;
using System.Collections;
using System.Linq;

namespace laba4._1
{
    internal class Program
    {
        public static void OutputArray(int[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write($"{arr[i]}  ");
            }
            Console.WriteLine();
        }
        
        // 1 task
        public static void SumOfEven(int[] arr)
        {
            int sum = 0;
            for (int i = 0; i < arr.Length; i+=2)
            {
                Console.Write($"{arr[i]}  ");
                sum += arr[i] > 9 ? arr[i] : 0;
            }
            Console.WriteLine();
            Console.WriteLine($"The sum of even array indexes is {sum}");
        }
        
        // 2 task
        public static void Generate(int [] arr,int from, int to)
        {
            Random rnd = new Random();
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = rnd.Next(from, to);
                if (i + 1 < arr.Length)
                {
                    arr[i + 1] = rnd.Next(from, to);
                    Console.WriteLine($"parne {i} | {arr[i]}        neparne {i+1} | {arr[i+1]} \n");
                    i++;
                }

                else
                {
                    Console.WriteLine(arr[i]);
                }
            }
        }
        
        // 3 task
        public static void Swap5(int[] arr)
        {
            for (int i = 0; i < arr.Length; i+=2)
            {
                if (arr[i] < 5)
                {
                    arr[i] = 5;
                }
            }

            for (int i = 0; i < arr.Length; i+=2)
            {
                Console.Write($"{arr[i]}  ");
            }
            Console.WriteLine();
        }
        // 4 task
        public static void HasNearPair(int[] arr)
        {
            int numberOfPairs = 0;
            for (int i = 0; i < arr.Length-1; i++)
            {
                if (arr[i] == arr[i + 1] && i+1 < arr.Length)
                {
                    numberOfPairs += 1;
                    Console.WriteLine($"Yey! The pair is {arr[i]} and {arr[i+1]}");
                }

                else
                {
                    Console.WriteLine($"Uh-huh, nope! {arr[i]}  {arr[i+1]}");
                    
                }
            }
            int result = (numberOfPairs > 0) ? numberOfPairs : 0;
            Console.WriteLine($"The number of pairs in array is {result}");
        }
        
        // 5 task
        public static bool IsSorted(int[] arr)
        {
            for (int i = 1; i < arr.Length; i++)
            {
                if (arr[i - 1] > arr[i])
                {
                    Console.WriteLine("Hah! This array isn't sorted");
                    return false;
                }
            }
            return true;
        }
        // 6 task
        public static void SwapMinMax(int[] arr)
        {
            int maxValue = arr.Max();
            int minValue = arr.Min();

            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] == maxValue && arr[i] == minValue)
                {
                    continue;
                }
                
                else if (arr[i] == maxValue)
                {
                    arr[i] = minValue;
                }
                
                else if (arr[i] == minValue)
                {
                    arr[i] = maxValue;
                }
            }
            Console.WriteLine(minValue);
            Console.WriteLine(maxValue);
        }
        
        // 7 task
        public static void FrequentlySeen(int[] arr)
        {
            int count = 1, tempCount;
            int frequentNumber = arr[0];
            int tempNumber = 0;
            for (int i = 0; i < (arr.Length - 1); i++)
            {
                tempNumber = arr[i];
                tempCount = 0;
                for (int j = 0; j < arr.Length ; j++)
                {
                    if (tempNumber == arr[j])
                    {
                        tempCount++;
                    }
                }
                if (tempCount > count)
                { 
                    frequentNumber = tempNumber;
                    count = tempCount;
                }
            }
            Console.WriteLine("The most frequent number in this array is {0} has been repeated {1} times.",frequentNumber,count);
        }
        
        // 8 task
        public static void DifferentElements(int[] arr)
        {
            Console.WriteLine("The number of different elements in array is: " + arr.Distinct().Count()); 
        }
        
        // 9 task
        public static bool CheckNum(int num){
            int sum=0;
            for (int i=1;i<num;i++){
                if (num%i==0){
                    sum+=i;
                }
            }
            return num==sum;
        }

        public static void AddNum(int from, int to)
        {
            int index=0;
            for (int i=from;i<=to;i++){
                if(CheckNum(i)){
                    index++;
                }
            }
            
            int [] res=new int[index];
            index=0;
            for (int i=from;i<=to;i++){
                if(CheckNum(i)){
                    res[index++]=i;
                }
            }
            OutputArray(res);
            Console.WriteLine();
        }
        
        // 10 task
        public static void SumOfTwoNext(int[] arr)
        {
            for (int i = 0; i < arr.Length - 4; i++)
            {
                arr[i] = arr[i + 1] + arr[i + 2];
            }
        }
        
        // 11 task
        public static void InsertInputInSorted(int[] arr, int input)
        {
            Array.Sort(arr);
            Array.Reverse(arr);
            OutputArray(arr);
            ArrayList listSorted = new ArrayList(arr);
            listSorted.Add(input);
            listSorted.Sort();
            listSorted.Reverse();
            foreach(var element in listSorted)
            {
                Console.Write(element + "  ");
            }
            Console.WriteLine();
        }
        
        // 12 task
        public static void FibonacciNumbers(int size)
        {
            int[] arr = new int[size];
            int firstNumber = 13;
            int secondNumber = 21;
            arr[0] = firstNumber + secondNumber;
            arr[1] = arr[0] + secondNumber;
            for (int i = 2; i < arr.Length; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
            }
            OutputArray(arr);
        }
        
        // 13 task
        public static void FillArray(int[] arr, int from, int to)
        {
            Random rnd = new Random();
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = rnd.Next(from, to);
            }
        }
        
        // 14 task
        public static bool IfPol(int val){
            if (val%10==0)
                return false;

            int []arr= new int[(int)(Math.Log10(val))+1];
            for (int i=0;i<arr.Length;i++){
                arr[i]=val%10;
                val=val/10;
            }

            for (int i=0;i<arr.Length;i++){
                if (arr[i]!=arr[arr.Length-(1+i)])
                    return false;
            }
            return true;
        }

        public static void AddPoli(int from, int to)
        {
            int[] polindromaArray = new int[to - from];
            int polindex = 0;
            for (int i = from; i <= to; i++)
            {
                if (IfPol(i))
                {
                    polindromaArray[polindex] = i;
                    polindex++;
                }
            }
            // safe mechanism
            for (int i = 0; i < polindromaArray.Length; i++)
            {
                if (polindromaArray[i] == 0)
                    break;
                Console.Write(polindromaArray[i] + "  ");
            }
            Console.WriteLine();
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////

        public static void Main(string[] args)
        {
            int[] array = new int[40];
            Random rnd = new Random();
            for (int i = 0; i < array.Length; i++)
            {
                array[i] = rnd.Next(0, 100);
            }
            
            Console.WriteLine("----------- Task 1 -----------");
            SumOfEven(array);
            Console.WriteLine("----------- End of Task 1 -----------");
            
            Console.WriteLine("----------- Task 2 -----------");
            Generate(array, 0, 40);
            Console.WriteLine("----------- End of Task 2 -----------");
            
            Console.WriteLine("----------- Task 3 -----------");
            Swap5(array);
            Console.WriteLine("----------- End of Task 3 -----------");
            
            OutputArray(array);
            Console.WriteLine();
            
            Console.WriteLine("----------- Task 4 -----------");
            HasNearPair(array);
            Console.WriteLine("----------- End of Task 4 -----------");
            
            Console.WriteLine("----------- Task 5 -----------");
            IsSorted(array);
            int[] sorted = {1,2,3,4,5,6};
            Console.WriteLine(IsSorted(sorted));
            Console.WriteLine("----------- End of Task 5 -----------");
            
            Console.WriteLine("----------- Task 6 -----------");
            SwapMinMax(array);
            Console.WriteLine("----------- End of Task 6 -----------");
            
            Console.WriteLine("----------- Task 7 -----------");
            OutputArray(array);
            FrequentlySeen(array);
            Console.WriteLine("----------- End of Task 7 -----------");
            
            Console.WriteLine("----------- Task 8 -----------");
            DifferentElements(array);
            Console.WriteLine("----------- End of Task 8 -----------");
            
            Console.WriteLine("----------- Task 9 -----------");
            AddNum(0, 1000);
            Console.WriteLine("----------- End of Task 9 -----------");
            
            Console.WriteLine("----------- Task 10 -----------");
            OutputArray(array);
            SumOfTwoNext(array);
            OutputArray(array);
            Console.WriteLine("----------- End of Task 10 -----------");
            
            Console.WriteLine("----------- Task 11 -----------");
            InsertInputInSorted(array, 99);
            Console.WriteLine("----------- End of Task 11 -----------");
            
            Console.WriteLine("----------- Task 12 -----------");
            FibonacciNumbers(20);
            Console.WriteLine("----------- End of Task 12 -----------");
            
            Console.WriteLine("----------- Task 13 -----------");
            FillArray(array, 0, 100);
            OutputArray(array);
            Console.WriteLine("----------- End of Task 13 -----------");
            
            Console.WriteLine("----------- Task 14 -----------");
            AddPoli(100, 1000);
            Console.WriteLine("----------- End of Task 14 -----------");
        }
    }
}