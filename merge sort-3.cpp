/*
  8
  6 5 3 1 8 7 2 4
*/
#include<stdio.h>
#include<string.h>

int ara[100],k,n;

void merg()
{
    int temp,k=2,i;
   // while(1)
    {

    for(i=0;i<n;i=i+k)
    {
     if(ara[i]>ara[i+1])
     {
     temp=ara[i];
     ara[i]=ara[i+1];
     ara[i+1]=temp;
     }
    }

    }
}

int main()
{
    int i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&ara[i]);
    }
    merg();
    for(i=0;i<n;i++)
    printf("%d\n",ara[i]);
}
