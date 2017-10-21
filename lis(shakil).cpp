/*
  4
  5
  2
  4
  7
*/
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
vector<int>lis;
int cnt=0;
int inf=0,maxi;
void Lislength(int n)
{
    int I[cnt],L[cnt],stor[cnt];
    int low,mid,high,length,i,top,temp,j;
    length=0;
    I[0]=-inf;
    for(i=1; i<=n; i++)
        I[i]=inf;
    for(i=0; i<n; i++)
    {
        low=0;
        high=length;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(I[mid]<lis[i])
                low=mid+1;
            else
                high=mid-1;
        }
        I[low]=lis[i];
        L[i]=low;
        if(low>length)
        {
            length=low;

        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(L[i]>maxi)
        {
            maxi=L[i];
            temp=i;
        }

    }
    i=temp;
    top=L[i]-1;
    stor[top]=lis[i];
    top--;
    for(j=i-1; j>=0; j--)
    {
        if(L[j]==L[i]-1&&lis[j]<lis[i])
        {
            i=j;
            stor[top]=lis[i];
            top--;
        }
    }
    printf("Lis Length==%d\n",length);
    printf("Lis Sequence:\n");
    for(j=0; j<length; j++)
        printf("%d\n",stor[j]);


}


int main()
{
    int i,j,n,m=0,p,k;
    while(scanf("%d",&m)==1)
    {
        for(i=0; i<m; i++)
        {
            scanf("%d",&k);
            lis.push_back(k);
        //    printf("b==%d\n",inf);
            inf= max(inf,abs(k));
            printf("a==%d\n",inf);
        }
        cnt=m+2;
        inf=inf+2;
        maxi=-inf;
        Lislength(m);
    }

    return 0;
}

