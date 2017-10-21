#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,coun=0;
    char c='a';
    for(i=0; i<26; i++)
    {
        for(j=0; j<=38500; j++)
        {
            printf("%c",c+i);
            coun++;
            if(coun==1000000)
            {
            printf("\n");
            return 0;
            }
        }
    }
}
