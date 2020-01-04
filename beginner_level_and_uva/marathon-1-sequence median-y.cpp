#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>q;
    int i,j,k,l,m,num;
    int n;
    double ans;

    while(scanf("%d",&n)==1)
    {
        if(n%2==0)
            k=(n/2)+1;
        else
            k=(n+1)/2;
        j=0;

        for(i=1; i<=n; i++)
        {
            scanf("%d",&num);
            if(i>k)
            {
                if(num>=q.top())
                    continue;
                if(num<q.top())
                {
                  q.push(num);
                  q.pop();
                }
            }
          //  j++;
          else
            q.push(num);
        }

     //   m=j-k;
        if(n%2==0)
        {
          //  for(j=0; j<m; j++)
          //  {
           //     k=q.top();
           //     q.pop();
         //   }

            k=q.top();
            q.pop();

            l=q.top();
            ans=(k*1.0+l*1.0)/2.0;
        }
        else
        {
          //  for(j=0; j<m; j++)
            {
           //     k=q.top();
           //     q.pop();
            }
            k=q.top();
            q.pop();
            ans=k;
        }
        printf("%.1lf\n",ans);
        while(!q.empty())
        {
            q.pop();
        }
    }
}
