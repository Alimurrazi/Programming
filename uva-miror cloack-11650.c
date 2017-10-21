#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]= {"12:00"},str1[20],str2[20],str3[20];
    int i,j,length,length1,k,temp=0;
    while(1)
    {
        //gets(str1);
        scanf("%s",str1);
        length=strlen(str);
        length1=strlen(str1);
        i=0;
        while(str[length-1-i]!=':')
        {
            if((str[length-1-i])<(str1[length-1-i]))
                k=((str[length-1-i]-48)+60)-(str1[length1-1-i]-48)+temp;
            else
                k=(str[length-1-i]-48)-(str1[length1-1-i]-48)+temp;
            str2[i]=(k%10)+48;
            temp=k/10;
            i++;
        }
        //printf("%c",str2[i-1]);
        str2[i]=' ';
        i++;
        while(str1[i])
        {
            if(temp==0 && str[length-1-i]>=str1[length-1-i])
            {
                k=(str[length-1-i]-48)-(str1[length-1-i]-48);
                str2[i]=(k%10)+48;
                temp=k/10;
                // i++;
            }
            if(temp>0 && str[length-1-i]>str1[length-1-i])
            {
                k=(str[length-1-i]-48)-((str1[length-1-i]-48)+1);
                str2[i]=(k%10)+48;
                temp=k/10;
            }


        }
        // for(i=length-1;i>=0;i--)
        {
            // printf("%d",str2[i]);
        }
        printf("%s",str2);
    }
}
