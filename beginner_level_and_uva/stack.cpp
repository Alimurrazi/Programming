#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
 int i,j,k,l,m,n;
 stack < int > st;
 st.push(1);
 st.push(2);
 st.push(3);
 while(!st.empty())
 {
  k=st.top();
  printf("%d\n",k);
  st.pop();
 }
}
