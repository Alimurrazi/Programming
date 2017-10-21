#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

bool check[102][102];
int  ara[102][102];
bool indi[102];

int main()
{
    int i,j,k,l,m,n,x,y,high,serial=1;
    double sum;
    while(scanf("%d%d",&m,&n)==2)
    {
        sum=0,l=0;
        memset(check,false,sizeof(check));
        memset(indi,false,sizeof(indi));
        if(m==0 && n==0)
            break;
        check[m][n]=true;
        if(indi[m]==false)
        {
          indi[m]=true;
          l++;
        }
        if(indi[n]==false)
        {
          indi[n]=true;
          l++;
        }
        high=max(m,n);

        while(scanf("%d%d",&x,&y)==2)
        {
            if(x==0 && y==0)
                break;
            if(x>high)
            high=x;
            if(y>high)
            high=y;
            check[x][y]=true;
        if(indi[x]==false)
        {
          indi[x]=true;
          l++;
        }
        if(indi[y]==false)
        {
          indi[y]=true;
          l++;
        }
        }

        for(i=1;i<=high;i++)
        {
        for(j=1;j<=high;j++)
        {
        if(check[i][j]==true)
        {
        ara[i][j]=1;
        }
        else
        ara[i][j]=10000000;
        }
        }

        for(k=1;k<=high;k++)
        {
         for(i=1;i<=high;i++)
         {
          for(j=1;j<=high;j++)
          {
           {
            if(i==j)
            continue;
            if((ara[i][k]+ara[k][j])<ara[i][j])
             ara[i][j]=ara[i][k]+ara[k][j];
           }
          }
         }
        }

      for(i=1;i<=high;i++)
      {
      for(j=1;j<=high;j++)
      {
      if(i==j || ara[i][j]==10000000)
      continue;
      sum=sum+ara[i][j];
      }
      }

   n=(l*l)-l;
    sum=sum/n;
   printf("Case %d: average length between pages = %0.3lf clicks\n",serial,sum);
   serial++;
   // printf("%0.3lf\n",sum);
    }
}
