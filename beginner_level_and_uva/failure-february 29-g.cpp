#include<stdio.h>
#include<string.h>
long long leap(long long year)
{
  if(year%4==0)
  {
    if(year%100==0 && year%400==0)
      return 1;
    if(year%100==0 && year%400!=0)
      return 0;
    return 1;
  }
 if(year%4!=0)
    return 0;
}

int main()
{
 char fstr[100],lstr[100];
 char fmonth[50],lmonth[100];
 char c;
 long long fd,ld,fm,lm,fy,ly,year,k;
 int i,j,l,t,m,n,p,q;
 scanf("%d%*c",&t);
 i=0;
 while(t--)
 {
  scanf("%s%lld%c%lld",fmonth,&fd,&c,&fy);
  scanf("%s%lld%c%lld",lmonth,&ld,&c,&ly);
  k=0;
  if(strcmp(fmonth,"January")==0)
   fm=1;
    if(strcmp(fmonth,"February")==0)
   fm=2;
    if(strcmp(fmonth,"March")==0)
   fm=3;
    if(strcmp(fmonth,"April")==0)
   fm=4;
    if(strcmp(fmonth,"May")==0)
   fm=5;
    if(strcmp(fmonth,"June")==0)
   fm=6;
    if(strcmp(fmonth,"July")==0)
   fm=7;
    if(strcmp(fmonth,"August")==0)
   fm=8;
    if(strcmp(fmonth,"September")==0)
   fm=9;
    if(strcmp(fmonth,"October")==0)
   fm=10;
    if(strcmp(fmonth,"November")==0)
   fm=11;
    if(strcmp(fmonth,"December")==0)
   fm=12;
    if(strcmp(lmonth,"January")==0)
   lm=1;
    if(strcmp(lmonth,"February")==0)
   lm=2;
    if(strcmp(lmonth,"March")==0)
   lm=3;
    if(strcmp(lmonth,"April")==0)
   lm=4;
    if(strcmp(lmonth,"May")==0)
   lm=5;
    if(strcmp(lmonth,"June")==0)
   lm=6;
    if(strcmp(lmonth,"July")==0)
   lm=7;
    if(strcmp(lmonth,"August")==0)
   lm=8;
    if(strcmp(lmonth,"September")==0)
   lm=9;
    if(strcmp(lmonth,"October")==0)
   lm=10;
    if(strcmp(lmonth,"November")==0)
   lm=11;
    if(strcmp(lmonth,"December")==0)
   lm=12;
   year=fy+1;
   while(year<=(ly-1))
   {
     if((leap(year))==1)
      k++;
     year++;
   }
   if(fm<=2 && leap(fy)==1)
    k++;
   if(lm==2 && ld==29)
    k++;
   if(lm>2 && leap(ly)==1)
    k++;
   if(fy==ly && leap(fy)==1)
    k=k-1;
  printf("Case %d: %lld\n",i=i+1,k);
 }
}
