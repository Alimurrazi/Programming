using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._345._Reverse_Vowels_of_a_String
{
    public class Solution
    {
        int ReverseStringIndex;
        int ForwardStringIndex;
        bool checkForVowel(char c)
        {
            if (c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                return true;
            }
            return false;
        }
        int findNextVowelIndexForward(string str, int index)
        {
            int i;
            for(i = index; i < ReverseStringIndex; i++)
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
            for (i = index; i > ForwardStringIndex; i--)
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
            char temp;
            char[] charAra = s.ToCharArray();
            ReverseStringIndex = charAra.Length-1;
            ForwardStringIndex = 0;
            for (i = 0; i < ReverseStringIndex; )
            {
                for(j = ReverseStringIndex; j > ForwardStringIndex;)
                {
                    i = findNextVowelIndexForward(s, i);
                    j = findNextVowelIndexReverse(s, j);
                    if (i >= j)
                    {
                        return new string(charAra);
                    }
                    else
                    {
                        temp = charAra[i];
                        charAra[i] = charAra[j];
                        charAra[j] = temp;
                        ReverseStringIndex = j - 1;
                        ForwardStringIndex = i + 1;
                        i = i + 1;
                        break;
                    }
                }
            }
            return new string(charAra);
        }
    }
}
