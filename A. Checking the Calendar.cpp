#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a,b;
    char str1[100],str2[100];
    while(scanf("%s%s",str1,str2)==2)
    {
        if(strcmp(str1,"monday")==0)
            a=1;
        if(strcmp(str1,"tuesday")==0)
            a=2;
        if(strcmp(str1,"wednesday")==0)
            a=3;
        if(strcmp(str1,"thursday")==0)
            a=4;
        if(strcmp(str1,"friday")==0)
            a=5;
        if(strcmp(str1,"saturday")==0)
            a=6;
        if(strcmp(str1,"sunday")==0)
            a=7;

        if(strcmp(str2,"monday")==0)
            b=1;
        if(strcmp(str2,"tuesday")==0)
            b=2;
        if(strcmp(str2,"wednesday")==0)
            b=3;
        if(strcmp(str2,"thursday")==0)
            b=4;
        if(strcmp(str2,"friday")==0)
            b=5;
        if(strcmp(str2,"saturday")==0)
            b=6;
        if(strcmp(str2,"sunday")==0)
            b=7;
  //      printf("%d %d\n",a,b);
        bool check=false;
        k=(a+31)%7;
        if(k==0)
        k=7;
        if(k==b)
        check=true;

        k=(a+30)%7;
        if(k==0)
        k=7;
        if(k==b)
        check=true;

        k=(a+28)%7;
        if(k==0)
        k=7;
        if(k==b)
        check=true;
        /*
        if(((a+31)%8)==b)
            check=true;
        if(((a+28)%8)==b)
            check=true;
        if(((a+30)%8)==b)
            check=true;
        */
        if(check==true)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
