#include<stdio.h>
struct cse13
{
 char name[20];
 int reg;
};
int main()
{
 struct cse13 student[10];
 int i;
 for(i=0;i<3;i++)
 {
  scanf("%s%d",&student[i].name,&student[i].reg);
 }
 printf("\n");
 for(i=0;i<3;i++)
 {
  printf("%s %d\n",student[i].name,student[i].reg);
 }
 return 0;
}
