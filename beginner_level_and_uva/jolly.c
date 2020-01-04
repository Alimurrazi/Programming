#include<stdio.h>
#include<math.h>
int main()
{
 int ara[3000];
 int i,j,k,l,m,n,z;
 while(scanf("%d",&n)!=EOF)
 {
  z=0,j=1;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
  }
  for(i=0;i<n;i++)
  {
   if(ara[i+1]>ara[i])
   {
    if(ara[i+1]-ara[i]==n-j)
        z++;
    else
        break;
   }
   if(ara[i+1]<ara[i])
   {
    if(ara[i]-ara[i+1]==n-j)
     z++;
    else
        break;
   }
   j++;
  }
  if(z==n-1)
    printf("Jolly\n");
  else
    printf("Not jolly\n");
 }
 return 0;
}
