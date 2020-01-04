#include<stdio.h>
int main()
{
 int i,j,k,l,x,y,z,m;
 int T;
 scanf("%d",&T);
 while(T--)
 {
  scanf("%d%d%d",&x,&y,&z);
  k=(x+y)*60;//total work time in minute;
  m=k/3;//each sharing work time;
  i=(x*60)-m;//a works for third family
  if(i<=0){
    printf("0\n");
     continue;}
  else
  j=(z*i)/m;
  printf("%d\n",j);
 }
 return 0;
}
