﻿using System;

namespace TwoPointerCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            //int[] ara = { -7, -3, 2, 3, 11 };
            //new _977.Squares_of_a_Sorted_Array.Solution().SortedSquares(ara);

            //   int[] ara = { 0, 1, 0, 3, 12 };
            //int[] ara = { 1,0,1,0,1,0 };
            //new _283._Move_Zeroes.Solution().MoveZeroes(ara);

            //int[] nums1 = { 1, 2, 2, 1 };
            //int[] nums2 = { 2, 2 };
            //int[] nums1 = { 4, 9, 5 };
            //int[] nums2 = { 9, 4,9,8,4 };

            //  new _350._Intersection_of_Two_Arrays_2.Solution().Intersect(nums1, nums2);
            string str1 = "a####";
            string str2 = "a#";
            bool result = new _844._Backspace_String_Compare.Solution().BackspaceCompare(str1, str2);
            Console.WriteLine(result);
        }
    }
}