#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i;
     vector<int>edge;
     edge.push_back(1);
     edge.push_back(1);
     edge.push_back(0);
     edge.push_back(1);
     edge.push_back(1);
     edge.push_back(1);
     edge.push_back(1);
     edge.push_back(0);
     edge.push_back(0);
     edge.push_back(1);
     edge.push_back(1);
     edge.push_back(0);
     edge.push_back(0);
     edge.push_back(0);
   //  while(next_permutation(edge.begin(),edge.end()));
   int c=0;
     while(next_permutation(edge.begin()+1,edge.end()))
     {
      for(i=0;i<14;i++)
      printf("%d",edge[i]);
      printf("\n");
      c++;
     }
     printf("c===%d\n",c);
}
