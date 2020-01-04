#include<stdio.h>
int main()
{
 long a,b,c,d,e,f;
 while(1)
 {
  scanf("%ld%ld%ld",&a,&b,&c);
  if(a==0 && b==0 && c==0)
        return 0;
   d=a*a;
   e=b*b;
   f=c*c;
 if((d+e)==f)
  {
    printf("right\n");
    continue;
  }
 else if((e+f)==d)
  {
     printf("right\n");
     continue;
  }
 else if((d+f)==e)
  {
    printf("right\n");
    continue;
  }
  else
    printf("wrong\n");
 }
 return 0;
}
