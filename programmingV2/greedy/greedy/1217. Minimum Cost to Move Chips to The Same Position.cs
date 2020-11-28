using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    public class _1217
    {
        public int MinCostToMoveChips(int[] position)
        {
            int res = 0, odd_count =0, even_count =0;
            foreach(int num in position)
            {
                if (num % 2 == 0)
                {
                    even_count++;
                } else
                {
                    odd_count++;
                }
            }
            res = Math.Min(odd_count, even_count);
            return res;
        }
    }
}
