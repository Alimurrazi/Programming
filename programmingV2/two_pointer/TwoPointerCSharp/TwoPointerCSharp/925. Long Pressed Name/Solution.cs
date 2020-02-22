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
            bool NameLastIndexReached = false;
            bool TypeLastIndexReached = false;
            bool LastTypedIndex = false;
            if (name[0] != typed[0])
            {
                return false;
            }
            for (i = 1; i < name.Length; i++)
            {
                if (i == name.Length - 1)
                {
                    NameLastIndexReached = true;
                }
                if (name[i] == name[i - 1])
                {
                    NumberOfNameRepetedChar++;
                }
                if(name[i] != name[i-1] || NameLastIndexReached)
                {
                    //if (TypedCharIndex >= typed.Length)
                    //{
                    //    return false;
                    //}
                    for (j = TypedCharIndex; j < typed.Length; j++)
                    {
                        if(j == typed.Length-1)
                        {
                            LastTypedIndex = true;
                        }
                        if (typed[j] == name[i - 1])
                        {
                            NumberOfTypeRepetedChar++;
                        }
                        if(typed[j] != name[i - 1] || TypeLastIndexReached)
                        {
                            if (NumberOfTypeRepetedChar >= NumberOfNameRepetedChar)
                            {
                                    NumberOfNameRepetedChar = 1;
                                    NumberOfTypeRepetedChar = 0;
                                if(i == name.Length - 1)
                                {
                                    i++;
                                    j--;
                                    TypeLastIndexReached = true;
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

                    if (NameLastIndexReached == false && LastTypedIndex == true)
                    {
                        return false;
                    }
                }

            }
            

            return check;
        }
    }
}
