#include<stdio.h>
#include<string.h>

char str1[100];
char str2[100];
int num[100][100];
char path[100][100];

int print(int i,int j)
{
    if(i==0 || j==0)
        return 0;
    if(path[i][j]=='c' && str1[i-1]==str2[j-1])
    {
        printf("%c",str1[i-1]);
        print(i-1,j-1);
    }
    else if(path[i][j]=='u')
        print(i-1,j);
    else
        print(i,j-1);
}

int main()
{
    int i,j,k,l,m,n,l1,l2;
    scanf("%s%s",str1,str2);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0; i<l1; i++)
        num[0][i]=0;
    for(i=0; i<l2; i++)
        num[i][0]=0;
    for(i=1; i<=l1; i++)
    {
        for(j=1; j<=l2; j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                num[i][j]=num[i-1][j-1]+1;
                path[i][j]='c';
            }
            else
            {
                if(num[i-1][j-1]>=num[i-1][j] && num[i-1][j-1]>=num[i][j-1])
                {
                    num[i][j]=num[i-1][j-1];
                    path[i][j]='c';
                }
                else if(num[i-1][j]>=num[i-1][j-1] && num[i-1][j]>=num[i][j-1])
                {
                    num[i][j]=num[i-1][j];
                    path[i][j]='u';
                }
                else
                {
                    num[i][j]=num[i][j-1];
                    path[i][j]='s';
                }
            }
        }
    }
    printf("%d\n",num[l1][l2]);
    print(l1,l2);
}
