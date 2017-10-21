#include<stdio.h>
#include<string.h>

char str1[100];
char str2[100];
int ara[100][100];
char path[100][100];

int print(int i,int j)
{
    //  printf("i==%d j==%d\n",i,j);
    if(i==0 || j==0)
        return 0;
    if(path[i][j]=='s')
    {
        printf("%c",str1[i-1]);
        print(i-1,j-1);
    }
    else if(path[i][j]=='*')
    {
        printf("%c",path[i][j]);
        print(i-1,j-1);
    }
    else if(path[i][j]='+')
    {
        printf("%c",path[i][j]);
        print(i,j-1);
    }
    else
    {
        printf("%c",path[i][j]);
        print(i-1,j);
    }
}

int main()
{

    int i,j,k,l,m,n,t,l1,l2;
    scanf("%s%s",&str1,&str2);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0; i<=l1; i++)
    {
        ara[0][i]=i;
    }
    for(j=0; j<=l2; j++)
    {
        ara[j][0]=j;
    }
    //  printf("k=======%d\n",ara[4][0]);
    for(i=1; i<=l1; i++)
    {
        for(j=1; j<=l2; j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                ara[i][j]=ara[i-1][j-1];
                path[i][j]='s';
            }
            else
            {
                if((ara[i-1][j-1]+2)<=ara[i-1][j]+1 && (ara[i-1][j-1]+2)<=ara[i][j-1]+1)
                {
                    ara[i][j]=ara[i-1][j-1]+2;
                    path[i][j]='*';
                }
                else if((ara[i-1][j]+1)<=ara[i-1][j-1]+2 && (ara[i-1][j]+1)<=ara[i][j-1]+1)
                {
                    ara[i][j]=ara[i-1][j]+1;
                    path[i][j]='+';
                }
                else
                {
                    ara[i][j]=ara[i][j-1]+1;
                    path[i][j]='-';
                }
            }
        }
    }
/*
    for(i=0; i<=l1; i++)
    {
        for(j=0; j<=l2; j++)
            printf("%d ",ara[i][j]);
        printf("\n");
    }
*/
    printf("%d\n",ara[l1][l2]);
  //  print(l1,l2);
}
