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
                    low = mid + 1;
                }
            }

 
          
            low = low <= 0 ? 0 : low;
            low = low >= ara.Length ? ara.Length - 1 : low;

            high = high <= 0 ? 0 : high;
            high = high >= ara.Length ? ara.Length - 1 : high;

            var minDistanceFromHeater = Math.Min(Math.Abs(ara[low] - value), Math.Abs(ara[high] - value));
            minDistanceFromHeater = Math.Min(Math.Abs(ara[mid] - value), minDistanceFromHeater);
            if (minDistanceFromHeater > differ)
            {
                differ = minDistanceFromHeater;
            }
        }
        public int FindRadius(int[] houses, int[] heaters)
        {
            Array.Sort(houses);
            Array.Sort(heaters);

            for (int i = 0; i < houses.Length; i++)
            {
                binarySearch(heaters, houses[i]);
            }
            return differ;
        }
    }
}
