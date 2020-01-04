#include<stdio.h>
void search(int a)
{
//scanf("%d",&a);
    printf("%d",a);
}
int main()
{
    int i=123;
//scanf("%d",&i);
    while(i!=0)
    {
        scanf("%d",&i);
        if(i==3)
            search(i);
        else
            printf("no");
        //i--;
      //if(i==5)
      //break;
    }
    return 0;
}
