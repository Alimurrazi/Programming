#include<stdio.h>
int main()
{
    long  ara[100];
    long  N,L,i,j,temp,count;
    scanf("%ld",&N);
    while(N--)
    {
        scanf("%ld",&L);
        for(i=0; i<L; i++)
        {
            scanf("%ld",&ara[i]);
        }
         count=0;
        for(i=0; i<L; i++)
        {
            for(j=i+1; j<L; j++)
            {
                if (ara[i]>ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %ld swaps.\n",count);
    }
    return 0;
}
