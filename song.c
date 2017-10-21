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
Uva 12554 - A Special "Happy Birthday" Song!!!
8:11 PM  Programming, Uva solution  No comments

Problem Link

Solution :-

?
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
/*----------------------------------------------------*/
//Problem Setter: Rujia Liu
//Uva Problem No: 12554
//Problem Name  : A Special "Happy Birthday" Song!!!
//Type          : Ad hoc.
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*---------------------------------------------------*/

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
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int n,p;
    char s[100][100];
    char c[16][100]={"Happy","birthday","to","you","Happy","birthday",
    "to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    while(sc("%d",&n)==1)
    {
        int k=0,p=1;
        for(int i=0;i<n;i++)
        sc("%s",s[i]);
        if(n>16)
        p=ceil(n/16)+1;
        for(int j=0,i=0;j<16*p;j++,i++,k++)
        {
            if(i==n)
            i=0;
            if(j==16)
            k=0;
            pf("%s: %s\n",s[i],c[k]);
        }
    }
    return 0;
}
Email This
BlogThis!
Share to Twitter
Share to Facebook
Share to Pinterest

Newer Post Older Post Home
0 comments:

Post a Comment



  Dhaka

TOTAL PAGEVIEWS

 200,280
SUBSCRIBE VIA EMAIL


Enter your email address below to get latest articles directly in your inbox:




Delivered by Shipu's Blogspot

SHIPU'S BLOGS ON FACEBOOK


Popular
Tags
Blog Archives
Uva 10055 - Hashmat the brave warrior
Uva 100 - The 3n + 1
Uva 10038 - Jolly Jumpers
Uva 10018 - Reverse and Add
গ্রাফ থিওরি এবং একটি রুপকথার গল্প
NIM GAME




RELEX MODE


MY STATUS

UVa
LightOj
Spoj
Codeforces
Topcoder
ফেসবুকে আমি

Shipu Ahamed

Facebook
CONTACT FORM

Name

Email *

Message *





Copyright © 2014 Shipu's Blog | Powered by Blogger Developed by Shipu Ahamed | Blogger Theme by Lasantha
