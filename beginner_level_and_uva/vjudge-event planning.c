#include<stdio.h>
int main()
{
 int ara[100];
 int N,B,H,W,P,a,flag,i,j,k,t;
 while(scanf("%d%d%d%d",&N,&B,&H,&W)==4){
 while(H--)
 {
  flag=0;
  scanf("%d",&P);
  for(i=0;i<W;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=0;i<W;i++)
  {
   if(ara[i]>=N)
      flag=1;
  }
  if(flag==1&&N*P<=B)
  {
   printf("%d\n",N*P);
   break;
  }
  else
    printf("stay home\n");
    }
 }
  return 0;
}
