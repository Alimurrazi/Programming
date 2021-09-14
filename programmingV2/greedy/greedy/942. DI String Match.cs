using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    class _942
    {
        public int[] DiStringMatch(string s)
        {
            int[] res = new int[s.Length+1];
            int Ivalue = 0;
            int Dvalue = s.Length;
            for(int i = 0; i < s.Length; i++)
            {
                if (s[i] == 'I')
                {
                    res[i] = Ivalue++;
                } else
                {
                    res[i] = Dvalue--;
                }
            }
            res[s.Length] = Ivalue;
            return res;
        }
    }
}
