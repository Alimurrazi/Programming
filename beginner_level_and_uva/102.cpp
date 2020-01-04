FOR NEW PROGRAMMERS
PROGRAM WITHOUT C
MY PROBLEM SET
MYSELF
TIMEPASS

Shipu's Blog
Never Judge a Book by Its Cover.............


HOME
THEORY »
CODE FACTOR »
CONTEST SOLUTION »
DOWNLOADS »
LINK »
BOOKS
Uva 102 - Ecological Bin Packing
6:22 AM  Programming, Uva solution  2 comments

Problem:- http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=38


Description:-

প্রথমে বুঝতে সমস্যা হইছে আমার । অনেক help অনেক লেখা লেখি করে বুঝলাম এবং যেখান থেকে help পেয়েছি তার কিছু আর আমার কিছু মিলিয়ে বুঝানোর চেষ্টা করলাম ।

There three bin(in prblem)
1.  first three integer represent the number of brown ,Green and clean glass in bin1
2.  second three integer represent the number of brown ,Green and clean glass in bin2
3.  third three integer represent the number of brown ,Green and clean glass in bin3

Now our task , minimum move to same colored glass in one bin.

We discuss only one case: 1 2 3 4 5 6 7 8 9
Bin1 : 1+2+3=6; Bin2: 4+5+6=15 Bin3: 7+8+9=24 [note: total=45]
You have to calculate below sequence [it is must, because more minimum combination will find. So combination of color glass in Bin: BCG,BGC,CBG,CGB,GBC,GCB]

1.If we want to take brown glass in bin1, clean in bin2 & green in bin3[BCG]
Bin1: We have to move 3 clean & 2 green glass from bin1; so move=2+3=5
Bin2: We have to move 4 brown & 5 green glass from bin2 ;so move=4+5=9
Bin3: We have to move 7 brown & 9 clean glass from bin3 ; so move=7+9=16
Total move=5+9+16=30  [note: 45-1-6-8=30]

2.If we want to take brown glass in bin1, green in bin2 & clean in bin3[BGC]
Bin1: We have to move 3 clean & 2 green glass from bin1; so move=2+3=5
Bin2: We have to move 4 brown & 6 clean glass from bin2 ;so move=4+6=10
Bin3: We have to move 7 brown & 8 green glass from bin3 ; so move=7+8=15
Total move=5+10+15=30  [note: 45-1-5-9=30]

3. CBG: bin1: move=1+2=3, bin2: move=11; bin3: 16 total move: 30 [note…]
4.CGB: bin1: move:3  ,bin2: move=10 ,bin3: move=17 ,total move= 30   [note …]
5.GBC: bin1: move:4  ,bin2: move=11 ,bin3: move=15,total move= 30   [note …]
6.GCB: bin1: move:4  ,bin2: move=9  ,bin3:17 move= ,total move= 30   [note …]

So minimum move =30 for each combination of color glass in the bin
  So Answer: BCG 30 [BCG is alphabetically first]

Solution :-

#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    long int a[3][3],move[6],sum=0,min;
   int p,n,f,i,j;
   while(1)
   {
    sum=0;f=1;
    for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   n=sc("%ld",&a[i][j]);
   if(n==EOF){
     f=0;
     break;
   }
   sum=sum+a[i][j];
  }
 }
    if(f==0)
    break;
    move[0]=a[0][0]+a[1][2]+a[2][1];
    move[1]=a[0][0]+a[1][1]+a[2][2];
    move[2]=a[0][2]+a[1][0]+a[2][1];
    move[3]=a[0][2]+a[1][1]+a[2][0];
    move[4]=a[0][1]+a[1][0]+a[2][2];
    move[5]=a[0][1]+a[1][2]+a[2][0];

 for(i=0;i<6;i++)
  move[i]=sum-move[i];

 min=move[0];
 p=0;
 for(i=1;i<6;i++)
  if(min>move[i])
  {
    min=move[i];
    p=i;
  }
    if(p==0)
  pf("BCG %ld\n",min);
    else if(p==1)
  pf("BGC %ld\n",min);
 else if(p==2)
  pf("CBG %ld\n",min);
    else if(p==3)
  pf("CGB %ld\n",min);
    else if(p==4)
  pf("GBC %ld\n",min);
    else if(p==5)
  pf("GCB %ld\n",min);
  }
  return 0;
}
