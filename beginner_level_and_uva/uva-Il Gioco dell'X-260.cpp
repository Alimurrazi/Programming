#include<stdio.h>
#include<string.h>

char edge[250][250];
int n,p,b,w;

void bcheck(int i,int j)
{
    if(i>=0 && j>=0 && i<n && j<n && edge[i][j]=='b')
    {
        edge[i][j]='\0';
        if(i==(n-1))
        {
            b=1;
            return;
        }
        bcheck( i-1 , j-1 );
        bcheck( i-1 ,  j  );
        bcheck(  i  , j-1 );
        bcheck(  i  , j+1 );
        bcheck( i+1 ,  j  );
        bcheck( i+1 , j+1 );
    }
}

void wcheck(int i,int j)
{
    if(i>=0 && j>=0 && i<n && j<n && edge[i][j]=='w')
    {
        edge[i][j]='\0';
        if(j==(n-1))
        {
            w=1;
            return;
        }
        wcheck( i-1 , j-1 );
        wcheck( i-1 ,  j  );
        wcheck(  i  , j-1 );
        wcheck(  i  , j+1 );
        wcheck( i+1 ,  j  );
        wcheck( i+1 , j+1 );
    }
}

int main()
{
    int i,j,k,l,m,t=0;
    char str[250];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        return 0;
        b=0,w=0;
        memset(edge,'\0',sizeof(edge));
        t++;

        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            strcpy(edge[i],str);
        }

        for(i=0; i<n; i++)
        {
            if(edge[0][i]=='b')
            {
                bcheck(0,i);
            }
            if(b==1)
            {
                printf("%d B\n",t);
                break;
            }
        }

        if(b==0)
        {
            for(i=0; i<n; i++)
            {
                if(edge[i][0]=='w')
                    wcheck(i,0);
                if(w==1)
                {
                    printf("%d W\n",t);
                    break;
                }
            }
        }
    }
}
