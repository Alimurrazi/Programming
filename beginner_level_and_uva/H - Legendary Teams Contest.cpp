#include<stdio.h>
#include<map>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    map < string, int > q1;
    string s1,s2,s3;
    while(scanf("%d",&n)==1)
    {
        j=0;
        for(i=0; i<n; i++)
        {
            cin>>s1;
            cin>>s2;
            cin>>s3;

            if(q1[s1]==0 && q1[s2]==0 && q1[s3]==0)
            {
                j++;
                q1[s1]=1;
                q1[s2]=1;
                q1[s3]=1;
            }

        }
        printf("%d\n",j);
        q1.clear();
    }
}
