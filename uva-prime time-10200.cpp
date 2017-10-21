#include<stdio.h>
#include<string.h>
#include<math.h>
bool check[100010045];
bool eular[10002];
int main()
{
 memset(check,true,sizeof(check));
 int i,j,k,l,m,pc,ec,start,endo;
 m=sqrt(100010041);
 check[0]=false;
 check[1]=false;
 for(i=2;i<=m;i++)
 {
   if(check[i]!=false)
   {
    for(j=i*2;j<=100010041;j=j+i)
     check[j]=false;
   }
 }
 memset(eular,false,sizeof(eular));
 for(i=0;i<=10000;i++)
 {
    k=(i*i)+i+41;
    if(check[k]==true)
     eular[i]=true;
 }

   while(scanf("%d %d",&start,&endo)!=EOF)
   {
    pc=0,ec=0,k=0;
    //start=0;
    //endo=10000;
     for(i=start;i<=endo;i++)
     {
       //k=(i*i)+i+41;
       if(eular[i]==true)
       {
          ec++;
       }
     }
      printf("%.2lf\n",((ec)*100.0)/(endo-start+1));
      //return 0;
   }
   return 0;
}
