#include<stdio.h>
#include<vector>
using namespace std;

vector<int>input;
vector<int>temp;
int length;

int process(int key)
{
    int low=0,high=length,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid<length && input[temp[mid]]>key && input[temp[mid+1]]<=key)
            return mid+1;
        else if(input[temp[mid]]<key)
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}

void lcs()
{
    int i,j,k,l,index;
    temp.resize(input.size());
    temp[0]=0;
    length=0;
    for(i=1; i<input.size(); i++)
    {
        if(input[i]>input[temp[0]])
            temp[0]=i;
        else if(input[i]<input[temp[length]])
        {
            length++;
            temp[length]=i;
        }
        else
        {
            index=process(input[i]);
            temp[index]=i;
        }
    }
    printf("%d\n",length+1);
}

int main()
{
    int i,j,k,l,m,n;
    int t=1;
    k=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            k=k+1;
            if(k==1)
            {
                if(t!=1)
                printf("\n");
                printf("Test #%d:\n",t);
                t++;
                printf("  maximum possible interceptions: ");
                lcs();
                input.clear();
                temp.clear();
            }
            if(k==2)
                return 0;
        }
        else
        {
            input.push_back(n);
            k=0;
        }
    }
}
