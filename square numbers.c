#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,d,e,f,i,j,k,l;
 int c;
 while(1)
 {
  scanf("%d%d",&a,&b);
  if(a==0 && b==0)
        return 0;
  int count=0;
  for(i=a;i<=b;i++)
  {
   c=sqrt(i);
   if(c*c==i)
    count++;
  }
  printf("%d\n",count);
 }
 return 0;
}
