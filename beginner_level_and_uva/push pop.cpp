#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
 vector<int>edge;
 edge.push_back(1);
 edge.push_back(2);
 printf("%d\n",edge.front());
 printf("%d\n",edge.size());
 edge.pop_back();
 printf("%d\n",edge.size());
 printf("%d\n",edge.front());
}
