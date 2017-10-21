#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
 int i,j,k;
 deque<int>q;
 q.push_back(10);
 q.push_back(112);
 q.push_back(1);
 k=q.front();
 printf("%d\n",k);
 q.pop_front();
 k=q.front();
 printf("%d\n",k);
 k=q.back();
 printf("%d\n",k);
}
