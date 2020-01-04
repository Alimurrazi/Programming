#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int input[200000];
int temp[200000];
int path[200000];
int n,length;

int process(int key)
{
    int i,j,low=0,high=length,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid<length && input[temp[mid]]<key && input[temp[mid+1]]>=key)
            return mid+1;
        else if(input[temp[mid]]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}

int lis()
{
    stack<int>q;
    int i,j,k,l,index;
    for(i=0; i<=n; i++)
        path[i]=-1;
    temp[0]=0;
    length=0;
    for(i=1; i<n; i++)
    {
        if(input[i]<input[temp[0]])
            temp[0]=i;
        else if(input[i]>input[temp[length]])
        {
            length++;
            temp[length]=i;
            path[i]=temp[length-1];
        }
        else
        {
            index=process(input[i]);
            temp[index]=i;
            path[i]=temp[index-1];
        }
    }
    printf("%d\n",length+1);
    printf("-\n");
    index=temp[length];
    while(index!=-1)
    {
        q.push(input[index]);
        index=path[index];
    }
    while(!q.empty())
    {
        k=q.top();
        printf("%d\n",k);
        q.pop();
    }
}

int main()
{
    int i,j,k,l,m;
    i=0;
    while(scanf("%d",&input[i])==1)
    {
        i++;
    }
    n=i;
    lis();
}
