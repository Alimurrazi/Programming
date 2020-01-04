#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

vector<int>edge;
char str[40];
char stringcheck[1005][35];
int ara[40];
int check[40][40]={0};
int n,l,b,serial=0;
char str1[40];

void backtrack()
{
    int i,j,k,p,m;

    if(edge.size()==n)
    {
        for(p=0; p<n; p++)
         str1[p]=(edge[p]-1)+'a';
         str1[p]='\0';

        for(j=0; j<serial; j++)
        {
            if(strcmp(str1,stringcheck[j])==0)
                break;
        }

        if(j==serial)
        {
            printf("%s\n",str1);
            strcpy(stringcheck[serial],str1);
        serial++;
        }

        return ;

    }

    for(i=0; i<l; i++)
    {
        k=ara[i];
        if(check[k][i]==0)
        {
            if(!edge.empty())
            {
                m=edge.size();
                m=m-1;
                if(k<edge[m])
                    continue;
            }
            check[k][i]=1;
            edge.push_back(k);
            backtrack();
            check[k][i]=0;
            edge.pop_back();
        while(ara[i]==ara[i+1])
        i++;
        }
    }

}

int main()
{
    int i,j,k,m;

    while(scanf("%s%d",str,&n)!=EOF)
    {
        serial=0;
        memset(stringcheck,'\0',sizeof(stringcheck));
        memset(check,0,sizeof(check));
        if(!edge.empty())
        edge.clear();
        i=0;
        while(str[i])
        {
            ara[i]=(str[i]-'a')+1;
            i++;
        }
        sort(ara,ara+i);
        l=i;
        backtrack();
    }
}
