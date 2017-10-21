#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

char str[1005];
int val[125][125];

int main()
{
    int i,j,k,l,m,n,x,y,a,b;;
    bool check[100];
    vector<int>seq;
    while(scanf("%d",&n)==1)
    {
        memset(val,0,sizeof(val));
        m=0;
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            char c1=str[0],c2=str[0];
            l=strlen(str);
            k=0;
            for(j=1; j<l; j++)
            {
                if(str[j]!=c1 && c1==c2)
                    c2=str[j];
                if(str[j]!=c1 && str[j]!=c2 && c1!=c2)
                {
                    break;
                }
            }
          //  printf("%d\n",val[97][97]);

            if(j==l)
            {
                printf("l===%d\n",l);
                x=c1;
                y=c2;
                val[x][y]=val[x][y]+l;
                if(x==y)
                {
                    if((val[x][y]+val[x][x])>m)
                    {
                        m=val[x][y]+val[x][x];
                      //  a=x;
                      //  b=y;
                    }
                }
                if(x!=y)
                {
                    val[y][x]=val[y][x]+l;
                    if((val[y][x]+val[x][x]+val[y][y])>m)
                    {
                        m=val[y][x]+val[x][x]+val[y][y];
                     //   a=y;
                     //   b=x;
                    }
                }
                printf("m===%d\n",m);
            }
        }
        printf("%d\n",m);
    }
}
