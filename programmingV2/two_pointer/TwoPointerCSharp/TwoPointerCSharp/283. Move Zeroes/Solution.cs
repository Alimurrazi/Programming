using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._283._Move_Zeroes
{
    class Solution
    {
        public void MoveZeroes(int[] nums)
        {
            int low = 0, high = nums.Length - 1;
            while (low <= high)
            {
                if (nums[low] == 0)
                {
                    for(int i = low+1; i <= high; i++)
                    {
                        nums[i - 1] = nums[i];
                    }
                    nums[high] = 0;
               //     low++;
                    high--;
                }
                else
                {
                    low++;
                }
            }
            foreach(int num in nums)
            {
                Console.WriteLine(num);
            }
        }
    }
}
