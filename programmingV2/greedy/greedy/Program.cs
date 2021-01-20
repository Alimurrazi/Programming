using System;

namespace greedy
{
    class Program
    {
        static void Main(string[] args)
        {
            //           int[] ara = { 6 };
            // var a = [[5, 8],[3, 9],[5, 12],[16, 5]];
            int[][] ara = new int[][]
            {
               new int[] { 2, 3 },
               new int[] { 3, 7 },
               new int[] { 4, 3 },
               new int[] { 3, 7 }
            };
        //    int[,] ara = new int[,] { { 5, 8 }, { 3, 9 }, { 5, 12 }, { 16, 5 } };
            Console.WriteLine(new _1725().CountGoodRectangles(ara));
            //            Console.WriteLine(new _1217().MinCostToMoveChips(ara));
            //  Console.WriteLine(new _1403().MinSubsequence(ara));
        }
    }
}
