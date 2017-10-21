 #include<stdio.h>
 #include<math.h>
  int main()
  {
long long n,x,p;
 int t,i,j=1;
  scanf("%d",&t);
   while(t--)
{ scanf("%lld",&n);
printf("Case %d:",j++);
 p=sqrt(n);
 for(i=p;i>0;i--)
    {
  x=n-i*i;
 if((x%i==0)&&(x>=i))
    printf("% lld",x);
 }
 printf("\n");
  }
  return 0;
  }
