#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

bool pathcheck[10][10];
vector<int>ans;

void call(int start)
{
 ans.push_back(start);
 int i,j,u;

 if(ans.size()==9)
 {
  for(i=0;i<9;i++)
  printf("%d",ans[i]);
  printf("\n");
  return ;
 }

 for(i=1;i<=5;i++)
 {
  if(pathcheck[start][i]==true)
  {
   pathcheck[start][i]=pathcheck[i][start]=false;
   call(i);
   pathcheck[start][i]=pathcheck[i][start]=true;
   ans.pop_back();
  }
 }
}

int main()
{
    int i,j,k,l;
    memset(pathcheck,false,sizeof(pathcheck));
    pathcheck[1][2]=pathcheck[1][3]=pathcheck[1][5]=true;
    pathcheck[2][1]= pathcheck[2][3]= pathcheck[2][5]=true;
    pathcheck[3][1]= pathcheck[3][2]= pathcheck[3][4]= pathcheck[3][5]=true;
    pathcheck[4][3]= pathcheck[4][5]=true;
    pathcheck[5][1]= pathcheck[5][2]= pathcheck[5][3]= pathcheck[5][4]=true;

    call(1);
}
