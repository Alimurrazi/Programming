#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char str1[1000015];
char str2[1000015];

int main()
{
    int i,j,k,l,m,n,l1,l2,c1,c2,w1,w2;
    while(scanf("%s%s",str1,str2)==2)
    {
        l1=strlen(str1);
        l2=strlen(str2);
        c1=0,c2=0;
        w1=l1-1;
        w2=l2-1;
        for(i=0; i<l1; i++)
        {
            if(str1[i]>='1' && str1[i]<='9' && c1==0)
            {
                w1=i;
                c1=l1-i;
                break;
            }
        }
        for(j=0; j<l2; j++)
        {
            if(str2[j]>='1' && str2[j]<='9' && c2==0)
            {
                w2=j;
                c2=l2-j;
                break;
            }
        }
        if(c1>c2)
            printf(">\n");
        else if(c1<c2)
            printf("<\n");
        else
        {
            while(str1[w1]!='\0' || str2[w2]!='\0')
            {
                if(str1[w1]>str2[w2])
                {
                    printf(">\n");
                    break;
                }
                if(str1[w1]<str2[w2])
                {
                    printf("<\n");
                    break;
                }
                w1++,w2++;
            }
            if(str1[w1]=='\0' ||str2[w2]=='\0')
                printf("=\n");
        }
    }
}
