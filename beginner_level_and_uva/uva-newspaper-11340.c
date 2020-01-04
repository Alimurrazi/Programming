#include<stdio.h>
#include<string.h>
int main()
{
 long int ara[300];
unsigned char str1[10005],str[300];
 long int i,j,k,l,m,n,t,p,q,r;
 double sum;
unsigned char c;
 scanf("%ld",&t);
 while(t--)
 {
  scanf("%ld%*c",&k);
  memset(ara,0,sizeof(ara));
  for(i=0;i<k;i++)
  {
    gets(str1);
    sscanf(str1,"%uc %ld",&c,&m);
    l=c;
    ara[l]=m;
   // printf("%d ",ara[l]);
  }
  scanf("%ld%*c",&p);
  sum=0;
  for(i=0;i<p;i++)
  {
   gets(str1);
   //for(m=0;m<k;m++)
   {
   j=0;
   while(str1[j])
   {
    k=str1[j];
    sum+=ara[k];
    j++;
   }
  }
  }
  printf("%.2lf$\n",(sum*1.0)/100.0);
 }
 return 0;
}
