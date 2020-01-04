#include<stdio.h>
struct cse13
{
 char name[100];
 int roll;
};
int main()
{
 struct cse13 student[10000];
 int i;
 for(i=0;i<3;i++)
 {
  scanf("%s%d",student[i].name,&student[i].roll);
  printf("%s %d\n",student[i].name,student[i].roll);
 }
 return 0;
}
