#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
  int i,j,k,l;
  vector<char>edge[100];
  edge[0].push_back('d');
  edge[0].push_back('s');
  edge[0].push_back('k');
  edge[0].push_back('b');
  edge[0].push_back('c');
  for(i=0;i<edge[0].size();i++)
  {
    printf("%c\n",edge[0][i]);
  }
  printf("\n");
  edge[0].erase(edge[0].begin()+2);
    for(i=0;i<edge[0].size();i++)
  {
    printf("%c\n",edge[0][i]);
  }
}
