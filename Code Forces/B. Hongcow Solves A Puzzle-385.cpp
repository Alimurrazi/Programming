#include<bits/stdc++.h>
using namespace std;
int main()
{
    string fs,ss;
    vector<string>str;
    int i,j,k,l,m,n,t;
    while(scanf("%d%d",&m,&n)==2)
    {
        for(i=0; i<m; i++)
        {
            cin>>fs;
            ss=fs+fs;
            str.push_back(ss);
//          cout<<str[i]<<endl;
        }
        int uc=0,tc=0,rc=0;

        for(i=0; i<m; i++)
        {
            tc=0;
            for(j=0; j<n*2; j++)
            {
                if(str[i][j]=='X')
                    tc++;
            }
            if(tc!=0)
            {
                rc++;
                //      printf("tc==%d\n",tc);
                if(uc==0)
                    uc=tc;
                else
                {
                    if(tc!=uc)
                        break;
                }
            }
        }
        if(i==m && rc!=uc)
            printf("YES\n");
        else
            printf("NO\n");
        //  cout<<str[i]<<endl;
    }
}
