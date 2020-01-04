#include<stdio.h>
#include<string.h>
int main()
{
  bool ara[110];
  int ara1[110];
  int i,k,l,m,n,j;
  memset(ara,true,sizeof(ara));
  ara[0]=ara[1]=false;
  for(i=2;i*i<=100;i++)
  {
    if(ara[i]==true)
    {
      for(j=2*i;j<=100;j=j+i)
       ara[j]=false;
    }
  }
 // for(i=0;i<=110;i++)
  //{
  //  if(ara[i]==true)
    //  printf("%d ",i);
 // }
  j=0;
  for(i=0;i<=100;i++)
  {
   if(ara[i]==true)
     ara1[i]=0;
   else
     ara1[i]=-1;
  }
  n=51;
  while(1)
  {
   scanf("%d",&n);
   if(n==0)
        return 0;
  for(i=0;i<=100;i++)
  {
   if(ara[i]==true)
     ara1[i]=0;
   //if(ara[i]==false)
   else
     ara1[i]=-1;
  }
  for(i=2;i<=n;i++)
  {
    j=2;
    k=i;
   while(k!=1)
    {
     if(ara1[j]>=0)
     {
       if(k%j==0)
       {
         ara1[j]=ara1[j]+1;
         k=k/j;
         j=2;
       }
       else
         j++;
     }
     if(ara1[j]<0)
        j++;
    }
  }
  int cnt=0;
  l=0;
   printf("%3d! =",n);
   for(i=2;i<=n;i++)
   {
     if(ara1[i]==-1)
       continue;
     if(l%15==0 && l!=0)
     {
      printf("\n");
      printf("      ");
      cnt=0;
     }
     if(cnt>0)
     {
      printf("%3d",ara1[i]);
      l++;
     }
    else
    {
    printf("%3d",ara1[i]);
    l++;
    }
    cnt++;
   }
   printf("\n");
  }
}
