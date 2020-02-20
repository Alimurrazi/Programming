using System;
using System.Collections.Generic;
using System.Text;

namespace TwoPointerCSharp._925._Long_Pressed_Name
{
    class Solution
    {
        public bool IsLongPressedName(string name, string typed)
        {
            bool check = true;
            int i, j, NumberOfNameRepetedChar = 1, NumberOfTypeRepetedChar = 0, TypedCharIndex = 0;
            for(i = 1; i < name.Length; i++)
            {
                if(name[i] == name[i - 1])
                {
                    NumberOfNameRepetedChar++;
                }
                else
                {
                    for (j = TypedCharIndex; j < typed.Length; j++)
                    {
                        if (typed[j] == name[i - 1])
                        {
                            NumberOfTypeRepetedChar++;
                        }
                        else
                        {
                            if (NumberOfTypeRepetedChar >= NumberOfNameRepetedChar)
                            {
                                NumberOfNameRepetedChar = 1;
                                NumberOfTypeRepetedChar = 0;
                                if(i == name.Length - 1)
                                {
                                    i++;
                                    j--;
                                }
                                else
                                {
                                    TypedCharIndex = j;
                                    break;
                                }
                            }
                            else
                            {
                                check = false;
                                return check;
                            }

                        }
                    }
                }
            }
            if (name[name.Length - 1] != typed[typed.Length - 1])
            {
                return false;
            }
           

            return check;
        }
    }
}
