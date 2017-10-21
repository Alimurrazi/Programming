#include<stdio.h>
#include<math.h>
int main()
{
 double h,u,d,f,m,n,i,j,k,th,fr;
 int count;
 while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)==4)
 {
   if(h==0)
        return 0;
     th=0,count=0;
   fr=u*(f/100);
   u=u+fr;
   while(1)
   {
    count++;
    k=u-fr;
    u=k;
    if(u<0)
    {
    u=0;
    k=0;
    }
    th=th+k;
    if(th>h)
    {
     printf("success on day %d\n",count);
     break;
    }
    th=th-d;
    if(th<0)
    {
      printf("failure on day %d\n",count);
      break;
    }
   }
 }
}
