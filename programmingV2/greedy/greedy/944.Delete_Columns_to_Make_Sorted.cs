using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    class _944
    {
        public int MinDeletionSize(string[] strs)
        {
            int i, count = 0, j = 0;
            for (i = 0; i < strs[0].Length; i++)
            {
                for (j = 0; j < strs.Length-1; j++)
                {
                    var a = strs[j][i];
                    var b = strs[j+1][i];
                    int firstValue = (int)strs[j][i];
                    int secondValue = (int)strs[j+1][i];
                    if (firstValue > secondValue)
                    {
                        count++;
                        break;
                    }
                }
            }
            return count;
        }
    }
}
