/*
  5
  2
  3
  -1
  4
  5
*/
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int input[100];
int temp[100];
int path[100];
int n,length;
stack<int>q;

int process(int key)
{
    int low=0,mid,high=length;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid < length && input[temp[mid]]<key && key<=input[temp[mid+1]])
            return mid+1;
        else if(input[temp[mid]]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int lis()
{
    int i,j,k,m,index;
    memset(path,-1,sizeof(path));
    temp[0]=0;
    length=0;
    for(i=1; i<n; i++)
    {
        if(input[temp[0]]>input[i])
            temp[0]=i;
        else if(input[temp[length]]<input[i])
        {
            length++;
            temp[length]=i;
            path[temp[length]]=temp[length-1];
        }
        else
        {
            index=process(input[i]);
            temp[index]=i;
            path[temp[index]]=temp[index-1];
        }
    }
    printf("%d\n",length+1);
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
    return 0;
}

int main()
{
    int i,j,k,l,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&input[i]);
    lis();
}
