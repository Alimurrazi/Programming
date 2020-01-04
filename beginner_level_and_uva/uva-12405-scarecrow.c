#include<stdio.h>
int main()
{
 char str[150];
 int n,p,len,count,i,j,s,t,k,a;
 scanf("%d",&t);
 for(a=1;a<=t;a++)
 {
 count=0;
  scanf("%d%*c",&n);
  scanf("%[^\n]",str);
   p=(n*2)-1;
   for(i=0;i<p;i++)
   {
    if(str[i]=='.')
        count++;
    else
       continue;
   }
  k=count/3;
  j=count%3;
    s=k+j;
  if(k==0 && j==2)
        s=1;
  printf("Case %d: %d\n",a,s);
 }
 return 0;
}
