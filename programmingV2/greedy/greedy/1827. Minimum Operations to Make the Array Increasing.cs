using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    class _1827
    {
        public int MinOperations(int[] nums)
        {
            int res = 0;
            for(int i = 1; i < nums.Length; i++)
            {
                if (nums[i] <= nums[i - 1])
                {
                    res = res + (nums[i-1] - nums[i])+1;
                    nums[i] = nums[i - 1] + 1;
                }
            }
            return res;
        }
    }
}
