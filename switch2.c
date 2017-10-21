#include<stdio.h>
int main()
{
 char colour;
 int n=2;
 while(n!=0)
 {
 scanf("%c",&colour);
 n--;
 switch(colour)
 {
  case 'a':
      printf("amicable\n");
      break;
  case 'd':
    printf("dog\n");
      break;
  case 'f':
    printf("fan\n");
    break;
//  default:
  //  printf("no");
   // break;
 }}
 return 0;
}
