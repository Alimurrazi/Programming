#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,l,n,t;
    int ax,ay,bx,by,cx,cy,dx,dy;
    int kx,ky,mx,my,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=(ax-bx)+cx;
        dy=(ay-by)+cy;
        kx=ax-bx;
        ky=ay-by;
        mx=bx-cx;
        my=by-cy;
        k=(kx*my)-(mx*ky);
        k=fabs(k);
        printf("Case %d: %d %d %d\n",i,dx,dy,k);
    }
}
