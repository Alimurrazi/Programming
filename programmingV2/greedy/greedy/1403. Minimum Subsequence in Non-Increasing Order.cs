using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    class _1403
    {
        public IList<int> MinSubsequence(int[] nums)
        {
            List<int> selectedNums = new List<int>();
            int TotalSum = 0, resSum =0;
            Array.Sort(nums);
            Array.Reverse(nums);
            foreach(int num in nums)
            {
                TotalSum += num;
            }
            for(int i = 0; i < nums.Length; i++)
            {
                selectedNums.Add(nums[i]);
                if ((resSum + nums[i]) <= (TotalSum - nums[i]))
                {
                    resSum += nums[i];
                    TotalSum -= nums[i];
                }
                else
                {
                    break;
                }
            }
            return selectedNums;
        }
    }
}
