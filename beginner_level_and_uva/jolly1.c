#include<stdio.h>
#include<math.h>
int main()
{
 int ara[3050],ara1[3050];
 int i,j,k,l,n,differ;
 while(scanf("%d",&n)!=EOF)
 {
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=0;i<n;i++)
  {
   if(i==n-1)
        break;
   else
   ara1[i]=fabs(ara[i+1]-ara[i]);
  }
  j=1;
  for(i=0;i<n-1;i++)
  {
   if(ara1[i]!=n-j)
      break;
   else
        j++;
  }
  if(i==n-1){
    printf("Jolly\n");
    continue;}
  else
    printf("Not jolly\n");
 }
 return 0;
}
