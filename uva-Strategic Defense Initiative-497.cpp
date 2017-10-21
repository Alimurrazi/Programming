#include<stdio.h>
#include<string.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int>input;
vector<int>temp;
vector<int>path;
int length;

int process(int key)
{
    int low=0,high=length,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid<length && input[temp[mid]]< key && input[temp[mid+1]]>=key)
            return mid+1;
        else if(key<input[temp[mid]])
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}

void lis()
{
    stack<int>q;
    temp.resize(input.size());
    path.resize(input.size());
    int i,j,k,l,index;
    length=0;
    temp.push_back(0);
    for(i=0; i<input.size(); i++)
        path[i]=-1;
    for(i=1; i<input.size(); i++)
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
    printf("Max hits: %d\n",length+1);
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
    char str[100];
    int i,j,k,l,m,n,t;
    char c;
    scanf("%d",&t);
    getchar();
    getchar();
    for(j=0; j<t; j++)
    {
        while(gets(str))
        {
         //   gets(str);
            if(str[0]=='\0')
            break;
            k=atoi(str);
            input.push_back(k);
        }
        if(j!=0)
         printf("\n");
        lis();
        input.clear();
        temp.clear();
        path.clear();
    }
}
