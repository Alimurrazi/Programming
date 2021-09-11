using System;
using System.Collections.Generic;
using System.Text;

namespace greedy
{
    class _1323
    {
        public int Maximum69Number(int num)
        {
            int max = num;
            string converted = num.ToString(), temp;
            for(int i = 0; i < converted.Length; i++)
            {
                temp = converted;
                if(converted[i] == '6')
                {
                    temp = converted.Substring(0, i) + '9' + converted.Substring(i + 1);
                }
                else if (converted[i] == '9')
                {
                    temp = converted.Substring(0, i) + '6' + converted.Substring(i + 1);
                }
                if (Convert.ToInt32(temp) > max)
                {
                    max = Convert.ToInt32(temp);
                }
            }
           

            return max;
        }
    }
}
