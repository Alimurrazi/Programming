#include<stdio.h>
int main()
{
 char str[50];
 int bc,wc,T,i,tc,ac,N,j;
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
  bc=0,wc=0,tc=0,ac=0;
  scanf("%d",&N);
   scanf("%s",str);
   for(j=0;j<N;j++){
   if(str[j]=='B'){
        bc++;
       continue;
   }
   else if(str[j]=='W'){
      wc++;
      continue;
   }
   else if(str[j]=='T')
   {
    tc++;
    continue;
   }
   else if(str[j]=='A')
   {
    ac++;
   }
  }
  if(wc==0  && bc>0 && tc==0)
  {
    printf("Case %d: BANGLAWASH\n",i);
    continue;
  }
  else if(wc>0  && bc==0 && tc==0)
  {
    printf("Case %d: WHITEWASH\n",i);
    continue;
  }
  else if((wc>0 && bc>0 && wc-bc==0)||(wc==0 && bc==0 && tc>0))
  {
    printf("Case %d: DRAW %d %d\n",i,wc,tc);
    continue;
  }
  else if(wc<bc)
  {
    printf("Case %d: BANGLADESH %d - %d\n",i,bc,wc);
     continue;
     }
  else if(bc<wc)
  {
    printf("Case %d: WWW %d - %d\n",i,wc,bc);
    continue;
    }
   if(ac==N && bc==0 && wc==0 &&tc==0)
   {
    printf("Case %d: ABANDONED\n",i);
    }
 }
 return 0;
}
