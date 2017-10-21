#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

vector<int>input;
vector<int>serial;
vector<int>serialad;
vector<int>parent;

void lcis()
{
 int i,j,k;
 // printf("%d\n",k);
 parent.resize(input.size());
 parent[0]=-1;
 serial.push_back(input[0]);
 serialad.push_back(0);

 for(i=1;i<input.size();i++)
 {
  k=lower_bound(serial.begin(),serial.end(),input[i])-serial.begin();
  if(k==serial.size())
  {
   parent[i]=serialad[serialad.size()-1];
   serial.push_back(input[i]);
   serialad.push_back(i);
  }
  else
  {
   if(k==0)
   {
    parent[i]=-1;
   }
   else
   {
    parent[i]=serialad[k-1];
   }
   serial[k]=input[i];
   serialad[k]=i;
  }
 }
 printf("%d\n",serial.size());
 /*
 cout<<serial.size()<<endl;
 cout<<"-"<<endl;
 */
 k=serialad[serialad.size()-1];
 for(i=0;i<serial.size();i++)
 printf("%d\n",serial[i]);
}

int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)!=EOF)
    {
     input.push_back(n);
    }
    lcis();
}
