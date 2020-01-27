using System;
using System.Collections.Generic;
using System.Text;

namespace BinarySearchCSharp._69.sqrt_x_
{
    class Solution
    {
        public int MySqrt(int x)
        {
            if(x == 1)
            {
                return 1;
            }
            long low = 0, high = x/2;
            long mid = 0;
            long result;
            while (low <= high)
            {
                mid = (low + high) / 2;
                result = mid * mid;
                if(result == x)
                {
                    low = mid;
                    break;
                }
                else if (result > x)
                {
                    high = mid - 1;
                }
                else if (result < x)
                {
                    low = mid + 1;
                }
            }
        //    Console.WriteLine($"low=== {low}");
            if (low <= high)
            {
                return Convert.ToInt32(low);
            }
            else
            {
                return Convert.ToInt32(high);
            }
        }
    }
}
