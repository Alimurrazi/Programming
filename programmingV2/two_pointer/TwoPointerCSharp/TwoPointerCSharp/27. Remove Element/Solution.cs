using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._27._Remove_Element
{
    class Solution
    {
        public int RemoveElement(int[] nums, int val)
        {
            int index=0;
            for(int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != val)
                {
                    nums[index++] = nums[i];
                }
            }
            Array.Resize(ref nums, index);
            return index;
        }
    }
}
