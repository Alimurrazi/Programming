#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
 deque<int>q;
 q.push_back(10);
 q.push_back(112);
 q.push_front(1);
 int k;
// while(!q.empty())
 {
 k=q.front();
 printf("%d\n",k);
 q.pop_back();
 k=q.front();
 //k=q.erase(q.front());
 printf("%d\n",k);
 }
}
