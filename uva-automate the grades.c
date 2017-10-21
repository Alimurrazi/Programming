#include<stdio.h>
int main()
{
  int ara[5];
  int i,j,n,tr1,tr2,fi,te1,te2,te3,min,ste,at,ate,sum,k,t;
  scanf("%d",&t);
  for(j=1;j<=t;j++)
  {
    scanf("%d%d%d%d",&tr1,&tr2,&fi,&at);
    min=10000;
    ste=0;
    for(i=0;i<3;i++)
    {
     scanf("%d",&ara[i]);
     ste=ste+ara[i];
     if(ara[i]<min)
        min=ara[i];
    }
    k=ste-min;
    ate=k/2;
    sum=(tr1+tr2+fi+at+ate);
 if(sum>=90)
    {
        printf("Case %d: A\n",j);
        continue;
  }
  if(sum>=80 && sum<90)
  {
    printf("Case %d: B\n",j);
    continue;
  }
  if(sum>=70 && sum<80)
  {
    printf("Case %d: C\n",j);
    continue;
  }
  if(sum>=60 && sum<70)
  {
    printf("Case %d: D\n",j);
    continue;
  }
  if(sum<60)
  {
    printf("Case %d: F\n",j);
    continue;
  }
  }
  return 0;
}
