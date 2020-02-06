using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._350._Intersection_of_Two_Arrays_2
{
    class Solution
    {
        public int[] Intersect(int[] nums1, int[] nums2)
        {
            Array.Sort(nums1);
            Array.Sort(nums2);

            int maxLength = Math.Min(nums1.Length, nums2.Length);
            List<int> resultList = new List<int>();
            int index = 0, startingForNums2 = 0;
            for(int i = 0; i < nums1.Length; i++)
            {
                for(int j = startingForNums2; j < nums2.Length; j++)
                {
                    if (nums1[i] == nums2[j])
                    {
                        resultList.Add(nums1[i]);
                        startingForNums2 = j+1;
                        break;
                    }
                }
            }
            int[] result = resultList.ToArray();
            for(int i = 0; i < result.Length; i++)
            {
                Console.WriteLine(result[i]);
            }
            return result;
        }
    }
}
