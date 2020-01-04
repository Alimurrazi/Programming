#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],str1[50]={"HELLO"},str2[50]={"HOLA"},str3[50]={"HALLO"},str4[50]={"BONJOUR"},str5[50]={"CIAO"},str6[50]={"ZDRAVSTVUJTE"};
 char str7[10]={"#"};
 long long i=0;
 while(1)
 {
  i++;
  scanf("%s",str);
  if(strcmp(str,str7)==0)
    return 0;
  else if(strcmp(str,str1)==0)
  {
   printf("Case %d: ENGLISH\n",i);
   continue;
  }
  else if(strcmp(str,str2)==0)
  {
   printf("Case %d: SPANISH\n",i);
   continue;
  }
  else if(strcmp(str,str3)==0)
  {
   printf("Case %d: GERMAN\n",i);
   continue;
  }
  else if(strcmp(str,str4)==0)
  {
   printf("Case %d: FRENCH\n",i);
   continue;
  }
  else if(strcmp(str,str5)==0)
  {
   printf("Case %d: ITALIAN\n",i);
   continue;
  }
  else if(strcmp(str,str6)==0)
  {
   printf("Case %d: RUSSIAN\n",i);
   continue;
  }
  else
  {
   printf("Case %d: UNKNOWN\n",i);
   continue;
  }
 }
 return 0;
}
