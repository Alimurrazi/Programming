#include<iostream>
//#include<list>
//#include<string>
//#include<cstring>
//#include<cstdlib>
//#include<sstream>
//#include<cctype>
//#include<string.h>
//#include<algorithm>
//#include<cmath>
//#include<stack>
//#include<fstream>
#include<cstdlib>
//#include<vector>
//#include<map>
//#include<set>
//#include<utility>
//#include<iomanip>
//#include<queue>

using namespace std;
main()
{
    char s1[1000],s2[1000];
    long double a,b;
    char c;
    while(cin>>s1>>c>>s2)
    {

       a=atof(s1);
       cout<<a;
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

