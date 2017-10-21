#include<stdio.h>
#include<string.h>
struct dic
{
  char fword[30],eword[30];
};
int main()
{
  struct dic word[500];
 // char str[4]={""};
  int i=0;
  while(1)
  {
   //scanf("%s%s",word[i].fword,word[i].eword);
   gets(word[i].fword);
   //i++;
   if(word[i].fword[0]=='\0')
        break;
   // printf("%s",word[i].fword);
  //  printf("%s",word[i].eword);
    i++;
    //   return 0;
  }
 // return 0;
}
