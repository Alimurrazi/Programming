#include<stdio.h>
#include<string.h>
struct cse13
{
 char name[20];
 int sid;
 double cgp;
};
void print(struct cse13 student[])
{
    int i;
 for(i=0;i<3;i++)
 {
  printf("\n");
  printf(" %s %d %.2lf",student[i].name,student[i].sid,student[i].cgp);
 }
}
int main()
{
 struct cse13 student[10];
 int i;
 for(i=0;i<3;i++)
 {
  scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgp);
}
print(student);
return 0;}
