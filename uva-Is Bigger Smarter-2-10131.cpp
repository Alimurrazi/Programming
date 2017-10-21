#include<stdio.h>
#include<queue>
#include<vector>
#include<string.h>
#include<stack>
#include<iostream>
using namespace std;

vector<int>input;
vector<int>winput;
vector<int>temp;
vector<int>path;
int length;

struct data
{
    int w;
    int s;
    int j;
    bool operator < (const data & p)const
    {
        if(p.w > w)
            return false;
        if(p.w==w && p.s <s)
            return false;
        if(p.w==w && p.s==s && p.j>j)
            return false;
        return true;
    }
};

priority_queue<data>q;

int process(int key,int weight)
{
    int low=0,high=length,mid;
    while(low<=high)
    {
    //    printf("k\n");
        mid=(low+high)/2;
        if(mid<length && input[temp[mid]]>key && input[temp[mid+1]]<=key)
        {
      //   if(winput[temp[mid]]<weight && winput[temp[mid+1]]>=weight)
      //  if(winput[temp[mid]]!=weight && winput[temp[mid+1]]!=weight)
            if(winput[temp[mid+1]]!=weight)
            return mid+1;
        }
        else if(input[temp[mid]]<key)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}


int lis()
{
    int i,k,index,m;
    temp.resize(input.size());
    path.resize(input.size());
    for(i=0; i<input.size(); i++)
        path[i]=-1;
    data u,t;
    u=q.top();
    temp[0]=u.j;
    length=0;
    q.pop();
    while(!q.empty())
    {
        u=q.top();
        //  printf("%d %d %d\n",u.w,u.s,u.j);
     //    printf("aager==%d %d\n",winput[temp[0]],input[temp[0]]);
     //    printf("first==%d %d\n\n",u.w,u.s);
        if(u.w!=winput[temp[0]] && u.s>input[temp[0]])
        {
     //    printf("first==%d %d\n",u.w,u.s);
            temp[0]=u.j;
        }
        else if(u.s<input[temp[length]] && u.w!=winput[temp[length]])
        {
            //   printf("k\n");
            length++;
            temp[length]=u.j;
            path[u.j]=temp[length-1];
        }
        else
        {
            index=process(u.s,u.w);
            temp[index]=u.j;
            path[u.j]=temp[index-1];
        }
        q.pop();
    }
    printf("%d\n",length+1);
    stack<int>ans;
    index=temp[length];
    while(index!=-1)
    {
        // printf("%d\n",index);
        ans.push(index+1);
        index=path[index];
    }
    while(!ans.empty())
    {
        k=ans.top();
        printf("%d\n",k);
        ans.pop();
    }
}

int main()
{
    int i,k,l,m,n;
    data u,t;
    i=0;
   // while(scanf("%d%d",&m,&n)!=EOF)
   m=-99999999;
   n=-99999999;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        winput.push_back(m);
        input.push_back(n);
        u.w=m;
        u.s=n;
        u.j=i;
        q.push(u);
        i++;
    }
    /*
    while(!q.empty())
    {
     u=q.top();
     printf("%d %d %d\n",u.w,u.s,u.j);
     q.pop();
    }
    */
    if(m!=-99999999 && n!=-99999999)
    {
    lis();
    input.clear();
    winput.clear();
    path.clear();
    temp.clear();
    }
}
