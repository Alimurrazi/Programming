using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._345._Reverse_Vowels_of_a_String
{
    public class Solution
    {
        bool checkForVowel(char c)
        {
            if (c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                return true;
            }
            return false;
        }
        int findNextVowelIndexForward(string str, int index)
        {
            int i;
            for(i = index; i < str.Length; i++)
            {
                if (this.checkForVowel(str[i]))
                {
                    return i;
                }
            }
            return i;
        }
        int findNextVowelIndexReverse(string str, int index)
        {
            int i;
            for (i = index; i >= 0; i--)
            {
                if (this.checkForVowel(str[i]))
                {
                    return i;
                }
            }
            return i;
        }
        public string ReverseVowels(string s)
        {
            int i, j;
            for (i = 0; i < s.Length; )
            {
                for(j=s.Length-1;j>=0;)
                {
                    i = findNextVowelIndexForward(s, i);
                    j = findNextVowelIndexReverse(s, j);
                    if (i >= j)
                    {
                        return s;
                    }
                    else
                    {

                    }
                }
            }
            return s;
        }
    }
}
