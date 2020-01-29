using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._977.Squares_of_a_Sorted_Array
{
    class Solution
    {
        public int[] SortedSquares(int[] A)
        {
            int low=0, high=A.Length-1;
            int[] result = new int[A.Length];
            int lowSquare, highSquare, index = high;

            while (low <= high)
            {
                lowSquare = A[low] * A[low];
                highSquare = A[high] * A[high];
                if (lowSquare > highSquare)
                {
                    result[index--] = lowSquare;
                    low++;
                }
                else
                {
                    result[index--] = highSquare;
                    high--;
                }
            }


            return result;
        }
    }
}
