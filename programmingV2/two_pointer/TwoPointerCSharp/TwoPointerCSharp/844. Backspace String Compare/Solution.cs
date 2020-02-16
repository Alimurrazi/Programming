using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._844._Backspace_String_Compare
{
    public class Solution
    {
        int Sindex,Tindex,i,j;
        int GetNonHashIndex(string S, int FirstIndex)
        {
            int hashCount = 0;
            for (i = FirstIndex - 1; i >= 0; i--)
            {
                if (S[i] == '#')
                {
                    hashCount++;
                }
                else
                {
                    if (hashCount == 0)
                    {
                        return i;
                    }
                    else
                    {
                        hashCount--;
                    }
                }
            }
            return -1;
        }

        public bool BackspaceCompare(string S, string T)
        {
            Sindex = S.Length;
            Tindex = T.Length;

            while (Sindex != -1 && Tindex != -1)
            {
               Sindex = this.GetNonHashIndex(S, Sindex);
               Tindex = this.GetNonHashIndex(T, Tindex);
                if (Sindex == -1 && Tindex == -1)
                {
                    return true;
                }
                if (Sindex == -1 || Tindex == -1)
                {
                    return false;
                }
                if (S[Sindex] != T[Tindex])
                {
                    return false;
                }  
            }
            return true;
        }
    }
}
