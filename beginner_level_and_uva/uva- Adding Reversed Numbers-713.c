#include<stdio.h>
#include<string.h>
int main()
{
 char str[210],str1[210],str2[210],str3[210],temp[210];
 int i,j,k,l,m,n,le1,le2,le3,tempo,a,t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%s%s",str1,str2);
  le1=strlen(str1);
  le2=strlen(str2);
  memset(temp,'\0',sizeof(temp));
  for(i=le1-1,j=0;i>=0;i--,j++)
  {
    temp[j]=str1[i];
  }
  temp[j]='\0';
  strcpy(str1,temp);

   for(i=le2-1,j=0;i>=0;i--,j++)
  {
    temp[j]=str2[i];
  }
  temp[j]='\0';
  strcpy(str2,temp);
  le1=strlen(str1);
  le2=strlen(str2);

  if(le2>le1)
  {
   strcpy(temp,str1);
   strcpy(str1,str2);
   strcpy(str2,temp);
   tempo=le1;
   le1=le2;
   le2=tempo;
  }
  k=0,tempo=0,a=0;
  for(i=le1-1,j=le2-1;j>=0;i--,j--)
  {
   k=(str1[i]-'0')+(str2[j]-'0')+tempo;
   str[a]=k%10+'0';
   tempo=k/10;
   a++;
  }
  for( ;i>=0;i--)
  {
   k=(str1[i]-'0')+0+tempo;
   str[a]=k%10+'0';
   tempo=k/10;
   a++;
  }
  if(tempo>0)
  {
   str[a]=tempo+'0';
   a=a+1;
   str[a]='\0';
  }
  else
   str[a]='\0';
   k=0;
   for(i=0;i<a;i++)
   {
     if(str[i]!='0')
       k=1;
      if(k==0)
       continue;
     else
        printf("%c",str[i]);
   }
  printf("\n");
 }
}
