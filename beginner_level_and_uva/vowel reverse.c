#include<stdio.h>
int main()
{
 char str[100]={"dogi"};
 int i,j,k;
 for(i=0;i<=3;i++)
 {
  if (str[i]=='o'||str[i]=='i')
        //continue;
    for(j=2;j<0;j--)
     {
      printf("%c",str[j]);
     }
} // printf("%c",str[j]);
 return 0;
}
