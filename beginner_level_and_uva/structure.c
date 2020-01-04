#include<stdio.h>
#include<string.h>
struct cse12
{
 char name[20];
 int sid;
 double cgp;
};

int main()
{
 struct cse12 student;
 strcpy(student.name,"Rana");
 student.sid=1;
 student.cgp=3.30;
 printf("student name:%s\n",student.name);
 printf("student sid:%d\n",student.sid);
 printf("student cgp:%lf\n",student.cgp);
 return 0;
}
