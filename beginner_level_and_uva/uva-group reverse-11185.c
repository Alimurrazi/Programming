#include<stdio.h>
#include<string.h>
int main()
{
 char str[200];
 int i,j,k,n,length;
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
    return 0;
  scanf("%s",str);
  length=strlen(str);
  j=0,k=0;
  n=length/n;
  for(i=0;i<length;i++)
  {
    if((i+1)%n==0)
    {
      for(j=i;j>=k;j--)
       printf("%c",str[j]);
      k=i+1;
    }
  }
  printf("\n");
 }
 return 0;
}
