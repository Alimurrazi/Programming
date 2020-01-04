#include<stdio.h>
int d,x,y;

void Extended_Euclid(int a, int b)
{
    int x1;
    /*
    if(b>a)
    {
        x1=a; //if b>a so I used this if condition
        a=b; // result is ok but x and y swaped
        b=x1;
    }
    */
    if(b==0)
    {
        d=a;
        x=1;
        y=0;
        return;
    }
    Extended_Euclid(b,a%b);
    printf("before %d %d\n",x,y);
    printf("a=%d b=%d\n",a,b);
    x1 = x-(a/b)*y;
    x = y;
    y = x1;
    printf("x==%d y==%d\n",x,y);
}

int main()
{
    int a,b;
    while(scanf("%d %d", &a, &b)==2)
    {
        Extended_Euclid(a,b);
        printf("%d %d %d\n",d,x,y);
    }
    return 0;
}
