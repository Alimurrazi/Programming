#include<stdio.h>
struct google
{
 char url[100];
 int relev;
};
int main()
{
 struct google serch[10];
 int i,j,max,t;
 scanf("%d",&t);
 for(j=1;j<=t;j++){
 for(i=0;i<10;i++)
 {
  scanf("%s%d",serch[i].url,&serch[i].relev);
 }
 max=serch[0].relev;
 for(i=0;i<10;i++)
 {
  if(serch[i].relev>max)
  {
   max=serch[i].relev;
  }
 }
 printf("Case #%d:\n",j);
 for(i=0;i<10;i++)
 {
  if(serch[i].relev==max)
  {
   printf("%s\n",serch[i].url);
  }
 }}
 return 0;
}
