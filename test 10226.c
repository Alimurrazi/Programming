#include <iostream>
#include<map>
#include<algorithm>
#include<iomanip>
#include <cstdio>
#include <string.h>
#include<stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
int main() {
// your code goes here
ll t;
scanf("%lld\n\n",&t);
while(t--){

map<string , ll> trees;
char s[35];
ll num_of_trees=0;


while(gets(s)){
if(strlen(s)==0) break;
ll flag=0;
num_of_trees++;
if (trees.count(string(s)) == 0) {
trees[string(s)] = 1;
} else
trees[string(s)] = trees[string(s)] + 1;
}

for(map<string ,ll>:: iterator it=trees.begin();it!=trees.end();it++){
cout<<it->first<<" "<<setprecision(4)<<fixed<<(double)it->second*100.00/num_of_trees<<"\n";
}
if(t>0){
printf("\n");
trees.clear();}
}
return 0;
}
