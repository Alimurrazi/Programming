#include<stdio.h>
#include<math.h>
int main()
{
  char str[10];
  long long x1,x2,x3,y1,y2,y3,r1,r2,z1,z2,z3,a,b,c,s,i,d1,d2,d3;
  while(scanf("%s%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld",str,&x1,&y1,&z1,&r1,&x2,&y2,&z2,&r2,&x3,&y3,&z3)!=EOF)
  {
   d1=(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3))+((z1-z3)*(z1-z3)));
   d2=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3))+((z2-z3)*(z2-z3)));
   r1=r1*r1;
   r2=r2*r2;
  printf("%s\n",str);
  if(d1<=r1)
    printf("y\n");
  else
    printf("n\n");
  if(d2<=r2)
    printf("y\n");
  else
    printf("n\n");
   if((d1<=r1)&&(d2<=r2))
  {
    printf("n\n");
    continue;
  }
   if(d1<=r1)
   {
     printf("y\n");
     continue;
   }
    if(d2<=r2)
   {
     printf("y\n");
     continue;
   }
   if(d1>r1 && d2>r2)
   {
     printf("n\n");
     continue;
   }
  }
  return 0;
}
