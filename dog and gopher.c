#include<stdio.h>
#include<math.h>
int main()
{
double gopherx,gophery, dogx,dogy, dogD,gopherD,X,Y;
int i,holenumber, flag=1;

while(scanf("%d %lf %lf %lf %lf",&holenumber,&gopherx,&gophery,&dogx,&dogy)==5)
{ flag=1;
for(i=0;i<holenumber;i++)
{
scanf("%lf %lf",&X,&Y);
dogD=(dogx-X)*(dogx-X)+(dogy-Y)*(dogy-Y);
gopherD=(gopherx-X)*(gopherx-X)+(gophery-Y)*(gophery-Y);

if(4.0*gopherD<=dogD)
{
printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n", X,Y);
flag=0;
}
}

if(flag)
printf("The gopher cannot escape.\n");
}
return 0;
}

