#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,c;
    string s1,s2,s3="ABC";
    scanf("%d",&n);
    cin>>s1;
    k=0,c=0;
    for(i=1;i<=n;i++)
    {
        cin>>s2;
        s3[0]=s2[5];
        s3[1]=s2[6];
        s3[2]=s2[7];
        if(s3==s1)
        {
        k--;
        c++;
        }
        s3[0]=s2[0];
        s3[1]=s2[1];
        s3[2]=s2[2];
        if(s3==s1)
        {
            k++;
            c++;
        }
    }
    if(k==0 && c==n)
        printf("home\n");
    else
        printf("contest\n");
}
