#include<stdio.h>

int n;
int ara[100]= {1,3,5,6,7,8};

int binary(int low,int high)
{
    int i,j,k,l,m,mid;
    while(1)
    {

        if(low>=high)
        {
        printf("not found\n");
        return 0;
        }
        mid=(low+high)/2;
       // printf("%d %d %d %d\n",low,high,mid,ara[mid]);
    //    printf("k=========%d\n",n);
        if(ara[mid]==n)
        {
            printf("paisi at %d\n",mid);
            return 0;
        }
        else
        {
        if(ara[mid]>n)
        high=mid-1;
        else
        low=mid+1;
        }
    }
  //  printf("Not found\n");
}

int main()
{
    int i,j,k,l,m;
    scanf("%d",&n);
    binary(0,5);
}
