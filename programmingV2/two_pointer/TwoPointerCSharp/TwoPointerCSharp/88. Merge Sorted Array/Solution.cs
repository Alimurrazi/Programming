using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._88._Merge_Sorted_Array
{
    public class Solution
    {
        private int[] shiftOneIndex(int[] ara, int start)
        {
            int i;
            for (i = ara.Length - 1; i > start; i--)
            {
                ara[i] = ara[i - 1];
            }
            return ara;
        }
        public void Merge(int[] nums1, int m, int[] nums2, int n)
        {
            int i, nums2StartingIndex = 0, count = 0 ;
            if (n != 0)
            {
                for (i = 0; i < nums1.Length && nums2StartingIndex<nums2.Length; i++)
                {
                    count++;
                    if ((nums1[i] > nums2[nums2StartingIndex]) || (i > 0 && nums1[i]<nums1[i-1]) || m == 0 || count>m)
                    {
                        nums1 = shiftOneIndex(nums1, i);
                        nums1[i] = nums2[nums2StartingIndex];
                        nums2StartingIndex++;
                    }
                }
            }
            Console.WriteLine(nums1);
        }
    }
}
