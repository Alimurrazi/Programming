#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
long long ara[150],ara1[150],ara2[150],n;
 long long bisearch(long long n)
 {
  long long start=0,finish=44,mid;
  while(1)
  {
   mid=(start+finish)/2;
   if(n>ara[mid])
   start=mid+1;
   if(n<ara[mid])
   finish=mid-1;
   if(n==ara[mid])
   return mid;
  }
 }

int main()
{
  char str[150],str1[150];
  long long i,j,l,m,t,high,length;
  long long k=pow(2,31);
  ara[0]=1;
  ara[1]=2;
  i=2;
  while(1)
  {
   ara[i]=ara[i-1]+ara[i-2];
   if(ara[i]>k)
    break;
   i++;
  }
  scanf("%lld",&t);
  while(t--)
  {
   high=0;
   scanf("%lld",&n);
   for(i=0;i<n;i++)
   {
     scanf("%lld",&m);
     ara1[i]=m;
   }
   scanf("%*c");
   gets(str);
   length=strlen(str);
   memset(str1,'a',sizeof(str1));
   l=0;
   for(i=0;i<n;i++)
   {
    j=bisearch(ara1[i]);
    m=j+1;
    if(m>high)
    high=m;
    j=l;
    while(1)
    {
     if(j>=length)
     break;
     if(str[j]>='A' && str[j]<='Z')
     {
     str1[m]=str[j];
    // printf("%c %c\n",str1[m],str[j]);
     l=j+1;
     break;
     }
     j++;
    }
   }
  // printf("l=%lld high=%lld\n",l,high);
   //printf("%c ",str1[3]);
   //str1[high+1]='\0';
   //high=high+1;
   for(i=1;i<=high;i++)
   {
   if(str1[i]=='a' && (i+1)>high)
   break;
   if(str1[i]=='a')
   {
     printf(" ");
     continue;
   }
   printf("%c",str1[i]);
   }
   printf("\n");
  }
}
