#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  char man[100][100];
char song[100][20]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
  int i=0,j=0,k,n,p,q;
  while(scanf("%d",&n)==1)
  {
  for(i=0;i<n;i++)
   scanf("%s",man[i]);
   k=0,q=0;
   if(n%16==0)
    p=(n/16);
   else
    p=(n/16)+1;
   for(i=0;i<16*p;)
   {
    for(j=0;j<n;j++)
    {
       if(k==16)
        k=0;
        if(q==(16*p))
          break;
       printf("%s: %s\n",man[j],song[k]);
       k++;
       q++;
      }
     i=i+n;
    }
  }
   return 0;
   }
