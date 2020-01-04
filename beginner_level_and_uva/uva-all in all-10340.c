#include<stdio.h>
#include<string.h>
int main()
{
 char str[300000],str1[300000];
 int i,j,k,l,length,length1,start,p;
 while(scanf("%s%s",str,str1)==2)
 {
  //scanf("%s%s",str,str1);
  length=strlen(str);
  length1=strlen(str1);
  l=0,k=0,start=0,p=0;
  for(i=0;i<length;i++)
  {
   for(j=start;j<length1;j++)
   {
     if(str[i]==str1[j])
     {
       start=j+1;
       l++;
       break;
     }
   }
   if(l==length)
   {
     printf("Yes\n");
     break;
   }
   if(j==length1 || length>length1)
   {
     printf("No\n");
     p=1;
     break;
   }
  }
  if(p==0 && l!=length)
  {
     printf("No\n");
     break;
  }
 }
}
