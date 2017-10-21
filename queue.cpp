#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
 int i,j,k;
 queue<int>q;
 q.push(10);
 q.push(112);
 q.push(1);
 k=q.front();
 q.pop();
 printf("%d\n",k);
 k=q.front();
 printf("%d\n",k);
}
