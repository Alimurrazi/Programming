#include<stdio.h>
#include<string.h>

char str1[35][90];

void floodfill(int x,int y)
{
    if(str1[x][y]==' '||str1[x][y]=='*')
    {
        str1[x][y]='#';
        floodfill(x,y+1);
        floodfill(x,y-1);
        floodfill(x-1,y);
        floodfill(x+1,y);
    }
}

int main()
{
    char str[90];
    int i,j,k,l,m,t,p;
    scanf("%d%*c",&t);
    while(t--)
    {
        memset(str1,0,sizeof(str1));
        i=0;
        while(1)
        {
            gets(str);
            strcpy(str1[i],str);
            i++;
            l=strlen(str);
            for(j=0; j<l; j++)
            {
                if(str[j]!='_')
                    break;
            }
            if(j==l)
                break;
        }
        for(j=0; j<i; j++)
        {
            k=0,p=0;
            while(str1[j][k])
            {
                if(str1[j][k]=='*')
                {
                    floodfill(j,k);
                    p=1;
                    break;
                }
                k++;
            }
            if(p==1)
                break;
        }
        for(j=0; j<i; j++)
        {
            printf("%s\n",str1[j]);
        }
    }
}
