using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    class _1725
    {
        public int CountGoodRectangles(int[][] rectangles)
        {
            int maxlen = Math.Min(rectangles[0][0], rectangles[0][1]);
            int i, maxcount = 0, temp;
            for (i = 0; i < rectangles.Length; i++)
            {
                temp = Math.Min(rectangles[i][0], rectangles[i][1]);
                if(temp == maxlen)
                {
                    maxcount++;
                } else
                {
                    if(temp > maxlen)
                    {
                        maxlen = temp;
                        maxcount = 1;
                    }
                }
            }
            return maxcount;
        }
    }
}
