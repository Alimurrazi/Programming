#include<stdio.h>
int recur(int n)
{
 //printf("%d\n",n);
 n=0;
 if (n==100)
        return 0;
// printf("%d\n",n);
 else
    return recur(n+1);
  printf("%d\n",n);
}
int main()
{
 int n=0;
 recur(n);
 return 0;
}
