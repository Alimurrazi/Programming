using System;
using System.Collections.Generic;
using System.Text;

namespace BinarySearchCSharp._475.Heaters
{
    class Solution
    {
        int differ = 0;
        void binarySearch(int[] ara, int value)
        {
            int low = 0;
            int high = ara.Length-1;
            int mid = 0;

            while (low <= high)
            {
                mid = (low + high) / 2;
                if (ara[mid] == value)
                {
                    break;
                }
                else if (ara[mid] > value)
                {
                    high = mid - 1;
                }
                else if (ara[mid] < value)
                {
                    low = high + 1;
                }
            }
            if(ara[mid] == value)
            {
                low = mid - 1;
                high = mid + 1;
            }
            if (low >= 0 && low < ara.Length)
            {
                if (Math.Abs(ara[low] - value) > differ)
                {
                    differ = Math.Abs(ara[low] - value);
                }
            }
            if (high >= 0 && high < ara.Length)
            {
                if (Math.Abs(ara[high] - value) > differ)
                {
                    differ = Math.Abs(ara[high] - value);
                }
            }
            Console.WriteLine(differ);
        }
        public int FindRadius(int[] houses, int[] heaters)
        {
            Array.Sort(houses);
            Array.Sort(heaters);

            int differLastAndFirstValue = Math.Abs(houses[0] - heaters[0]);
            if (differLastAndFirstValue > differ)
            {
                differ = differLastAndFirstValue;
            }
            if (houses.Length != 1)
            {
                differLastAndFirstValue = Math.Abs(houses[houses.Length - 1] - heaters[heaters.Length - 1]);
                if (differLastAndFirstValue > differ)
                {
                    differ = differLastAndFirstValue;
                }
            for (int i = 0; i < heaters.Length; i++)
            {
                binarySearch(houses, heaters[i]);
            }
            }
            return differ;
        }
    }
}
