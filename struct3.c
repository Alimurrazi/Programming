#include<stdio.h>
struct cse13//[10]
{
  char name[20];
  int reg;
  double gpa;
};
int main()
{
  struct cse13 student[12];
  int i,j;
  for(i=0;i<2;i++)
  {
   scanf("%s %d %lf",student[i].name,&student[i].reg,&student[i].gpa);
  }
  printf("\n");
  scanf("%d",&j);
  for(i=0;i<2;i++)
  {
   if(j==student[i].reg)
   printf("%s %d %lf",student[i].name,student[i].reg,student[i].gpa);
  }
  return 0;
}
