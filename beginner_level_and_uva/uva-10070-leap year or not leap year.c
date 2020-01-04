    3
    #include<stdio.h>
int main()
{
unsigned long long int i,j,k,n;
 while( scanf("%llu",&n)!=EOF)
 {
  i=0;
  if(n%4!=0)
   i=0;
  if(n%4==0)
        i=1;
  if(n%400==0 && n%100==0)
     i=1;
  if(n%400!=0 && n%100==0)
    i=0;
  if(i==1)
    {
     printf("This is leap year.\n");
     if(n%15==0)
     printf("This is huluculu festival year.\n");
     if(n%55==0)
     printf("This is bulukulu festival year.\n");
  printf("\n");
    }
  else
  {
    if(n%15==0){
     printf("This is huluculu festival year.\n\n");
    }
   else
    printf("This is an ordinary year.\n\n");
  }
 }
 return 0;
}
