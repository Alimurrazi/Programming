#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,k,l,n,m,temp;
 while(1)
 {
  scanf("%d%d",&m,&n);
  if(m==-1&&n==-1)
    return 0;
    if(m>n)
    {
     temp=m;
     m=n;
     n=temp;
    }
  k=((m-0)+(99-n)+1);
  l=fabs(n-m);
  if(k<l){
        printf("%d\n",k);
      continue;
  }
  else if(l<k){
    printf("%d\n",l);
    continue;}
  else if(l==k){
    printf("%d\n",l);
    continue;
  }
 }
 return 0;
}
