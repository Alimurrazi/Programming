#include<stdio.h>
#include<string.h>
int main()
{
 char str[1000];
 int a=1,b=4,c=78,n,i,j,k,length,t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%s",str);
  length=strlen(str);
  if(length==1 || length==2)
  {
  if(str[0]=='1'||str[0]=='4'||(str[0]=='7'&&str[1]=='8'))
    printf("+\n");
  }
else if(str[length-2]=='3' && str[length-1]=='5')
  {
    if(str[0]=='1'||str[0]=='4'||(str[0]=='7'&&str[1]=='8'))
      printf("-\n");
  }
 else if(str[0]=='9' && str[length-1]=='4')
  {
    if(str[1]=='1'||str[1]=='4'||(str[1]=='7'&&str[2]=='8'))
        printf("*\n");
  }
else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
  {
     if(str[length-1]=='1'||str[length-1]=='4'||(str[length-1]=='8'&&str[length-2]=='7'))
        printf("?\n");
  }
  else
    printf("+\n");
 }
 return 0;
}
