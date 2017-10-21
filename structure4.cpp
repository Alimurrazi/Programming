#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

struct data
{
    int h,m;
    bool operator < (const data & p)const
    {
        if(p.h>h)
        return false;
        if(p.h==h && p.m>m)
        return false;
     //   if(p.h==h && p.m==m && p.s>s)
     //     return false;
        return true;
    }
};

int main()
{
   data u,v;
   vector<data>collection;
   //struct data collection[100];
   u.h=2;
   u.m=30;
  // collection[0]=u;
   collection.push_back(u);
   u.h=2;
   u.m=1;
   collection.push_back(u);
  // collection[1]=u;
  // collection[1]=u;
   u.h=3;
   u.m=05;
  // collection[2]=u;
   collection.push_back(u);
   u.h=2;
   u.m=50;
   collection.push_back(u);
 //  collection[3]=u;
 //  for(int i=0;i<=3;i++)
 //  printf("%d %d\n",collection[i].h,collection[i].m);
   sort(collection,collection+collection.size());
   for(int i=0;i<=3;i++)
   printf("%d %d\n",collection[i].h,collection[i].m);
}
