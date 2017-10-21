#include<stdio.h>
#include<string.h>
int main()
{
 char str[3000][15];
 char str1[13];
 int i,j,k,l;
 char c;
 i=0,j=0;
 memset(str,'\0',sizeof(str));
 while(1)
 {
   c=getchar();
   if(c>='a' && c<='z')
     str[i][j++]=c;
   else
   {
     str[i++][j]='\0';
     j=0;
   }
   if(str[i][0]=='\0' && str[i-1][0]=='\0')
     break;
 }
 while(scanf("%s",str1)==1)
 {
   for(k=1;k<i;)
   {
    if(strcmp(str1,str[k])==0)
    {
        printf("%s\n",str[k-1]);
         break;
    }
     k=k+2;
   }
  if(k>(i-1))
    printf("eh\n");
 }
 return 0;
}
