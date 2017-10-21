//((4-(1+2*(6/3)-5)))
#include<stdio.h>
#include<stack>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
 char str[100];
 stack<char>serial;
 int i,j,k,l,m,n;
 char c;
 scanf("%s",str);
 i=0;
 while(str[i])
 {
  if(isdigit(str[i]))
  printf("%c",str[i]);
  else if(str[i]==')')
  {
  l=0;
  while(1)
  {
   c=serial.top();
   if(c=='(')
   {
    l++;
    if(l==2)
    break;
   }
   else
   printf("%c",c);
   serial.pop();
   if(serial.empty())
   break;
  }
  }
  else
  serial.push(str[i]);
  i++;
 }
}
