#include<stdio.h>
int main()
{
    int ara[12]= {5,3,7,2,1,8,9,0};
    int i,j,k,l,temp;
    for(i=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            if (ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(i=0; i<8; i++)
    {
        printf("%d",ara[i]);
    }
    return 0;
}
