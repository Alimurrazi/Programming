#include<stdio.h>
#include<string.h>
int main()
{
    long long i=0;
    char str[50],str1[50]= {"Hajj"},str2[50]= {"Umrah"},str3[5]= {"*"};
    while(1)
    {
        i++;
        scanf("%s",str);
        if(strcmp(str,str3)==0)
            return 0;
        else if(strcmp(str,str1)==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
            continue;
        }
        else if(strcmp(str,str2)==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
            continue;
        }
    }
    return 0;
}
