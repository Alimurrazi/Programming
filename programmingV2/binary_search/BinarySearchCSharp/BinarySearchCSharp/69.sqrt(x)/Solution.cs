using System;
using System.Collections.Generic;
using System.Text;

namespace BinarySearchCSharp._69.sqrt_x_
{
    class Solution
    {
        public int MySqrt(int x)
        {
            int low = 0, high = x;
            int mid=0, result;
            while (low <= high)
            {
                mid = (low + high) / 2;
                result = mid * mid;
                Console.WriteLine(result);
                Console.WriteLine("----------");
                if(result == x)
                {
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
            Console.WriteLine($"low=== {low}");
            Console.WriteLine($"high === {high}");
            Console.WriteLine($"mid === {mid}");
            if (low <= high)
            {
                return low;
            }
            else
            {
                return high;
            }
          //  return mid;

       //     Console.WriteLine(x);
        //    return x;
        }
    }
}
