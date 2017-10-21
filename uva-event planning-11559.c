#include<stdio.h>
int main()
{
 int ara[50];
 int N,B,H,W,i,j,k,l,p,nm,a;
 while(scanf("%d%d%d%d",&N,&B,&H,&W)==4)
 {
   j=0,nm=500050;
  while(H--)
  {
    scanf("%d",&p);
    l=0;
    for(i=0;i<W;i++)
    {
    scanf("%d",&a);
    if(a>=N)
    {
     l=1;
    }
    }
    if(l==1)
    {
    k=N*p;
    if(k<=B && k<=nm)
    {
     nm=k;
    }
  }
  }
  if(nm==500050)
   printf("stay home\n");
  else
  printf("%d\n",nm);
 }
 return 0;
}
