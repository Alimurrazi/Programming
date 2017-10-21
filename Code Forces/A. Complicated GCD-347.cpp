#include<stdio.h>
#include<string.h>

int main()
{
    char str1[1000],str2[1000];
    int i,j,k,l,m,n;
    while(scanf("%s%s",str1,str2)==2)
    {
        if(strcmp(str1,str2)==0)
            printf("%s\n",str1);
        else
            printf("1\n");
    }
}
