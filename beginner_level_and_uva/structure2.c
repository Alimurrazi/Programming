#include<stdio.h>
#include<string.h>
struct cse13
{
 char name[20];
 int sid;
 double cgp;
};
void input(struct cse13 student[])
{
  int i;
  for(i=0;i<3;i++)
  {
   scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgp);
  }
}
void output(struct cse13 student[])
{
 int i;
 for(i=0;i<3;i++)
 {
  printf("\n");
  printf("%s %d %.2lf \n",student[i].name,student[i].sid,student[i].cgp);
 }}
 void namesort(struct cse13 student[])
 {
     int i,j;
     for (i=0;i<3;i++)
     {
      for(j=i+1;j<3;j++)
      {
       if(strcmp(student[i].name,student[j].name)>0)
       {
         struct cse13 temp;
         strcpy(temp.name,student[i].name);
         temp.sid=student[i].sid;
         temp.cgp=student[i].cgp;

         strcpy(student[i].name,student[j].name);
         student[i].sid=student[j].sid;
         student[i].cgp=student[j].cgp;

        strcpy(student[j].name,temp.name);
         student[j].sid=temp.sid;
         student[j].cgp=temp.cgp;
       }
      }
     }
 }

int main()
{
 struct cse13 student[20];
 input(student);
 namesort(student);
 output(student);
 return 0;
}
