#include<stdio.h>
struct web
{
char str[100];
int no;
};
int main()
{
 struct web serch[10];
 int i,max,k;
 for(i=0;i<3;i++)
 {
  scanf("%s%d",serch[i].str,&serch[i].no);
 }
 //for(i=0;i<2;i++)
 //{
 // printf("%s%d\n",serch[i].str,serch[i].no);
 //}
 for(i=0;i<3;i++)
 {
  max=serch[0].no;
  k=0;
  if(serch[i].no>=max)
  {
  // printf("%s %d",serch[i].str,serch[i].no);
  max=serch[i].no;
  k=i;
  }}
  printf("%s %d",serch[k].str,serch[k].no);

 return 0;
}
