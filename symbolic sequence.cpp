#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,coun=0;
    for(i=0;i<10000000;i++)
    {
     a=rand()%1000000;
     a=a%26;
     if(('a'+a)=='x')
     coun++;
   //  printf("%c",'a'+a);
    }
    printf("%d\n",coun);
}
