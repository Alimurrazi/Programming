#include<stdio.h>
#include<string.h>

void dfs(int u)
{

}

int main()
{
    char str[1005];
    int indegree[30],outdegree[30];
    int i,j,k,l,m,n,t,coun1,coun2,coun3,coun4,coun5;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(indegree,0,sizeof(indegree));
        memset(outdegree,0,sizeof(outdegree));
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            k=str[0]-'a'+1;
            outdegree[k]++;
            l=strlen(str)-1;
            l=str[l]-'a'+1;
            indegree[l]++;
        }
        coun1=0,coun2=0,coun3=0,coun4=0,coun5=0;
        for(i=1; i<=26; i++)
        {
            if(indegree[i]>0 || outdegree[i]>0)
            {
                coun4++;
                if(indegree[i]-outdegree[i]==1)
                    coun1++;
                if(outdegree[i]-indegree[i]==1)
                    coun2++;
                if(indegree[i]!=0 && outdegree[i]!=0)
                {
                    if(indegree[i]==outdegree[i])
                        coun3++;
                }
            }
        }
        if(coun1<=1 && coun2<=1)
        {
            if((coun1+coun2+coun3)==coun4)
            {
                printf("Ordering is possible.\n");
                continue;
            }
        }
        printf("The door cannot be opened.\n");
    }
}
