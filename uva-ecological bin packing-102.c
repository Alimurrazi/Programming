#include<stdio.h>
int main()
{
  int ara[3][3];
  int i,j,k,l,min,n,sum=0;
  int s1,s2,s3,s4,s5,s6;
  while(1)
  {
   sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
     k=scanf("%d",&ara[i][j]);
      if(k==EOF)
        return 0;
      sum+=ara[i][j];
    }
  }
  min=sum+100;
  s1=sum-(ara[0][0]+ara[1][2]+ara[2][1]);
  if(s1<min)
  {
   min=s1;
   k=1;
  }
   s2=sum-(ara[0][0]+ara[1][1]+ara[2][2]);
  if(s2<min)
  {
   min=s2;
   k=2;
  }
   s3=sum-(ara[0][2]+ara[1][0]+ara[2][1]);
  if(s3<min)
  {
   min=s3;
   k=3;
  }
   s4=sum-(ara[0][2]+ara[1][1]+ara[2][0]);
  if(s4<min)
  {
   min=s4;
   k=4;
  }
   s5=sum-(ara[0][1]+ara[1][0]+ara[2][2]);
  if(s5<min)
  {
   min=s5;
   k=5;
  }
   s6=sum-(ara[0][1]+ara[1][2]+ara[2][0]);
  if(s6<min)
  {
   min=s6;
   k=6;
  }
    if(k==1)
    printf("BCG %d\n",min);
    if(k==2)
    printf("BGC %d\n",min);
    if(k==3)
    printf("CBG %d\n",min);
    if(k==4)
    printf("CGB %d\n",min);
    if(k==5)
    printf("GBC %d\n",min);
    if(k==6)
    printf("GCB %d\n",min);
  }
  return 0;
}
