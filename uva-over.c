#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007

main()
{
    char s1[1000],s2[1000];
    long double a,b;
    char c;
    while(cin>>s1>>c>>s2)
    {

       a=atof(s1);
       b=atof(s2);

        cout<<s1<<" "<<c<<" "<<s2<<endl;
        //cout<<a+b<<endl<<a*b<<endl;

        if(a>2147483647)
            cout<<"first number too big"<<endl;
        if(b>2147483647)
            cout<<"second number too big"<<endl;
        if(c=='+' && (a+b)>2147483647)
            cout<<"result too big"<<endl;
        if(c=='*' && (a*b)>2147483647)
            cout<<"result too big"<<endl;

    }
}
