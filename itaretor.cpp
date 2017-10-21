#include<stdio.h>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
 vector<int>ara;
 ara.push_back(10);
  ara.push_back(20);
   ara.push_back(30);
    ara.push_back(40);
     ara.push_back(50);
  //vector< int > :: iterator i;
  vector<int>::iterator i;
  /*
    for( i = v.begin(); i < v.end(); i++ ) {
        printf("%d\n", *i);
        // ei khane gola kato!
    }
    */
  for(i=ara.begin();i<ara.end();i++)
  {
   printf("%d\n",i);
  }
}
