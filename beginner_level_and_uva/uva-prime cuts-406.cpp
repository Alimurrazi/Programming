#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  bool prime[1010];
  int i,j,k,l,m,n,coun,c,p,q;
  memset(prime,1,sizeof(prime));
  m=sqrt(1000);
  prime[1]=1;
  for(i=2;i<=m;i++)
  {
    if(prime[i]!=0)
    {
    for(j=i*2;j<=1000;j=j+i)
    {
         prime[j]=0;
    }
  }
  }
//  printf("i==%d j==%d\n",i,j);
 // printf(" %d ",prime[3]);
  while(scanf("%d%d",&k,&l)==2)
  {
    coun=0;
    for(i=1;i<=k;i++)
    {
      if(prime[i]==1)
      {
        // printf("%d ",i);
         coun++;
      }
    }
    if(coun%2==0)
      c=l*2;
    else
      c=(l*2)-1;
      p=0;
     printf("%d %d:",k,l);
     if(c>coun)
     {
       for(i=1;i<=k;i++)
        if(prime[i]==1)
        printf(" %d",i);
       p=1;
     }
     if(p==1)
     {
      printf("\n\n");
      continue;
     }
     //printf("%d",c);
    for(i=0;i<=coun;i++)
    {
      if((i+c)==(coun-i))
          break;
    }
   // printf("%d ",i);
    int primcoun=0,p=0;
    for(j=1; ;j++)
    {
      if(prime[j]==1)
      {
        p++;
        if(p>=i+1)
        {
        printf(" %d",j);
        primcoun++;
        }
      }
      if(primcoun==c)
      {
         printf("\n\n");
         break;
      }
    }
  }
  return 0;
}
