#include<stdio.h>
#include<math.h>
int main()
{
 int ara[3050],ara1[3050],i,j,k,l,n,c,temp;
 while(scanf("%d",&n)==1)
 {
  c=0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=0;i<n-1;i++)
  {
   ara1[i]=fabs(ara[i+1]-ara[i]);
  }
  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n-1;j++)
   {
    if(ara1[i]<ara1[j])
    {
     temp=ara1[i];
     ara1[i]=ara1[j];
     ara1[j]=temp;
    }
   }
  }
  for(i=1;i<n-1;i++)
  {
   if(ara1[i]==ara1[i-1])
   {
     c=1;
        break;
   }
  }
  if(c==0)
    printf("Jolly\n");
  else
    printf("Not jolly\n");
 }
 return 0;
}
