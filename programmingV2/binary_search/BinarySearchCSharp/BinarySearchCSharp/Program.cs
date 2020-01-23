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
            int[] PositionOfHouses = { 282475249, 622650073, 984943658, 144108930, 470211272, 101027544, 457850878, 458777923 };
            int[] PositionOfHeaters = { 823564440, 115438165, 784484492, 74243042, 114807987, 137522503, 441282327, 16531729, 823378840, 143542612 };
            result = new _475.Heaters.Solution().FindRadius(PositionOfHouses, PositionOfHeaters);

          //  Console.WriteLine(result);
        }
    }
}
