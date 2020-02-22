using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._925._Long_Pressed_Name
{
    class Solution
    {
        char currentNameChar;
        int RepeatationCount(string str, int startingIndex)
        {
            int count = 0;
            for(int i = startingIndex; i < str.Length; i++)
            {
                if (str[i] != this.currentNameChar)
                {
                    break;
                }
                count++;
            }
            return count;
        }
        public bool IsLongPressedName(string name, string typed)
        {
            int i, j, nameCharCount = 0, typeCharCount = 0, typeStartingIndex = 0;
            for (i = 0; i < name.Length; )
            {
                this.currentNameChar = name[i];
                nameCharCount = this.RepeatationCount(name, i);
                i = i + nameCharCount;
                for (j = typeStartingIndex; j < typed.Length; )
                {
                    if (typed[j] != this.currentNameChar)
                    {
                        return false;
                    }
                    typeCharCount = this.RepeatationCount(typed, j);
                    if (typeCharCount >= nameCharCount)
                    {
                        typeStartingIndex = typeStartingIndex + typeCharCount;
                        break;
                    }
                    else
                    {
                        return false;
                    }
                }

                if((i< name.Length) && (typeStartingIndex >= typed.Length))
                {
                    return false;
                }
            }
            if (typeStartingIndex < typed.Length)
            {
                return false;
            }
            return true;
        }
    }
}