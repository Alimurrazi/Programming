#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,length,L;
    char str[5000],str2[5000],str1[5000],str3[100]= {"DONE"};
    while(gets(str))
    {
        if(strcmp(str3,str)==0)
            return 0;
         L=strlen(str);
         for(i=0;i<L;i++)
         {
          if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]-'A'+'a';
         }
         i=0,j=0;
        while(1)
        {
         if(str[i]=='\0')
         {
          break;
         }
        if(str[i]=='a'||str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='e'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='i'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='o'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='u'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z')
            {
                str1[j]=str[i];
                j++;
            }
            else
            {
                i++;
                continue;
            }
            i++;
        }
        str1[j]='\0';
        length=strlen(str1);
        for(i=length-1,j=0; i>=0; i--,j++)
        {
            str2[j]=str1[i];
        }
        str2[j]='\0';
        if(strcmp(str2,str1)==0)
        {
            printf("You won't be eaten!\n");
        }
        else
            printf("Uh oh..\n");
    }
    return 0;
}
