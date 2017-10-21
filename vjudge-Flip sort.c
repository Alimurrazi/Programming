#include<stdio.h>
int main()
{
 int ara[1100];
 int i,j,m,n,temp;
 int count;
 while(scanf("%d",&n)!=EOF)
 {count=0;
  for(i=1;i<=n;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=1;i<=n;i++)
  {
   for(j=i+1;j<=n;j++)
   {
    if (ara[i]>ara[j])
    {
     count++;
    }
   }
  }
  printf("Minimum exchange operations : %d\n",count);
 }
 return 0;
}
