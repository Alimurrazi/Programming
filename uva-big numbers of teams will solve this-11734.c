#include<stdio.h>
#include<string.h>
int main()
{
  char str[25],str1[25];
  int i,j,k,l,t,p,len1,len2;
  scanf("%d%*c",&t);
  for(p=1;p<=t;p++)
  {
   gets(str);
   gets(str1);
   len1=strlen(str);
   len2=strlen(str1);
   i=0,j=0,l=0;
   while(str[i] || str1[j])
   {
     if(str[i]==str1[j])
     {
       i++,j++;
       continue;
     }
     if(str[i]!=str1[j])
     {
       if(str[i]==' ')
       {
         l=1;
         i++;
         continue;
       }
       else
       {
         l=2;
         printf("Case %d: Wrong Answer\n",p);
         break;
       }
       i++,j++;
     }
   }
   if((str[i-1]!=str[len1-1])||str1[j-1]!=str1[len2-1])
   {
       if(l==2)
        continue;
       printf("Case %d: Wrong Answer\n",p);
       continue;
   }
   if(l==1)
   {
   // else
    printf("Case %d: Output Format Error\n",p);
    continue;
   }
    if(i==strlen(str1) && l==0)
    printf("Case %d: Yes\n",p);
  }
  return 0;
}
