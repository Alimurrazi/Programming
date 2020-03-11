using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._28._Implement_strStr__
{
    public class Solution
    {
        public int StrStr(string haystack, string needle)
        {
            int i, j = 0, result=-1;
            if(needle.Length == 0)
            {
                return 0;
            }
            for (i = 0; i < haystack.Length; i++)
            {
                if (haystack[i] == needle[j])
                {
                    if (j == 0)
                    {
                        result = i;
                    }
                    j++;
                    if (j == needle.Length)
                    {
                        break;
                    }
                }
                else
                {
                    j = 0;
                    result = -1;
                }
            }
            if (j != needle.Length)
            {
                result = -1;
            }
            return result;
        }
    }
}
