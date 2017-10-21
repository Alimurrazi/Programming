#include<bits/stdc++.h>
using namespace std;
bool ara[70][70];
vector<unsigned long long>q;
vector<string>qs;

void funct()
{
    string df;
    df=df+"6";
    cout<<df<<endl;
    printf("vvvvvvvv");
    printf("jj");
    unsigned long long i,j,k,l,m,n;
    string sa="1";
    qs.push_back(sa);
    printf("kk");
    i=1;
    for(i=2;i<=64;i++)
    {
     qs.push_back(qs[i-2]+"1");
    }
    printf("kk");
    for(i=0;i<=56;i++)
    {
    cout<<qs[i]<<endl;
    }
    string s1,s0;
    for(i=2;i<=64;i++)
    {
        for(j=i;j>=1;j--)
        {
            k=i-j;
          //  for(l=1;l<=j;l++)
          //  s1
           // qs.push_back();
            while(1)
            {
//                qs.push_back(k)
            }
        }
    }
  //  cout<<qs[i];
}

int main()
{
    unsigned long long i,j,k,l,m,n,t,a,b;

    funct();

    while(scanf("%llu%llu",&a,&b)==2)
    {

    }
}
