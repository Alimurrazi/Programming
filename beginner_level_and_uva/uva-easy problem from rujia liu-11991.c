#include<stdio.h>
#include<string.h>
int main()
{
 int ara[100][100];
 int i,j,k,l,m,n,q,p;
 //ara[5][2]=5;
// printf("%d",ara[5][2]);
 while(scanf("%d%d",&n,&m)==2)
 {
   k=0;
   for(i=0;i<n;i++)
   {
    scanf("%d",&q);
    while(1)
    {
     if(ara[q][k]==0)
        k++;
     if(ara[q][k]!=0)
        break;
    }
    ara[q][k]=0;
   }
 }

}
