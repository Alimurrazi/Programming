#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
 char s[100];
 int l;
 while(gets(s))
 {
   if(s[0]=='#')
      return 0;
   l=strlen(s);
   if(next_permutation(s,s+l))
    puts(s);
   else
    printf("No Successor\n");
 }
 return 0;
}
