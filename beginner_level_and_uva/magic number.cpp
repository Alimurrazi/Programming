
//uva 471 - Magic Numbers
//I still dont know why this approach got AC. Try N = 5 and it's
//definitely got TLE. I tried to approach this problem by recursive backtracking but it got TLE, although it is faster for some single test cases.
//Problem link
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const long long maxn = 9876543210;

 bool ok(long long x) {
 int mark=0,t;
 while (x>0)
 {
  t=x%10;
  x/=10;
  if (mark&(1<<t)) return(false);
  mark|=(1<<t);
 }
 return(true);
}

 int main() {
 int nTest;
 long long n,m;
 cin >> nTest;
 for (int test=1; test<=nTest; test++)
 {
  if (test>1) cout << endl;
  cin >> n;
  m=maxn/n;
  for (long long i=1; i<=m; i++)
   if (ok(i) && ok(i*n))
    printf("%lld / %lld = %lld\n",i*n,i,n);
 }
 return 0;
}
