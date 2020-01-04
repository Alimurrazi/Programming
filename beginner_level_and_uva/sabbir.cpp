
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    long t,n,a[100],i,j;
   while(scanf("%ld",&t)==1)
   {
    for(i=1;i<=t;i++)
    {
       // scanf("%ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3]);
       for(j=0;j<4;j++)
        scanf("%d",&a[j]);
       sort(a,a+j);
        if((a[0]==a[1]) && (a[1]==a[2]) && (a[2]==a[3]))
        {
            printf("square\n");
            continue;
        }
       // else
       // {
            //sort(a,a+t);
           else if((a[0]==a[1]) && (a[2]==a[3]))
           {
                printf("rectangle\n");
                continue;
           }
           //else if((a[0]+a[1]+a[2])>a[3])
             //   printf("quadrangle\n");
            //else
              //  printf("banana\n");
            else if((a[0]+a[1]+a[2])<=a[3])
            {
              printf("banana\n");
              continue;
            }
            else
                printf("quadrangle\n");
        }
    }
//}
    return 0;
}
