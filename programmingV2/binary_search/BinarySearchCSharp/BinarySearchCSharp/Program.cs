//using BinarySearchCSharp._69.sqrt_x_;
using System;

namespace BinarySearchCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            //   new _69.sqrt_x_.Solution().MySqrt(10);

            int result;
            int[] PositionOfHouses = { 1 };
            int[] PositionOfHeaters = { 1,2,3,4 };
            result = new _475.Heaters.Solution().FindRadius(PositionOfHouses, PositionOfHeaters);
            Console.WriteLine(result);
        }
    }
}
