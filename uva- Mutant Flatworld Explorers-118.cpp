#include<stdio.h>
#include<string.h>

int finalx,finaly,startx,starty,x,y,p;
char str[120];
char dik;
int death[60][60];

void dikcheckr()
{
    if(dik=='N')
    {
        dik='E';
        return ;
    }
    if(dik=='E')
    {
        dik='S';
        return ;
    }
    if(dik=='S')
    {
        dik='W';
        return ;
    }
    if(dik=='W')
    {
        dik='N';
        return ;
    }
}

void dikcheckl()
{
    if(dik=='N')
    {
        dik='W';
        return ;
    }
    if(dik=='W')
    {
        dik='S';
        return;
    }
    if(dik=='S')
    {
        dik='E';
        return ;
    }
    if(dik=='E')
    {
        dik='N';
        return ;
    }
}

void samne()
{
    x=startx,y=starty;
    if(dik=='N')
        y=starty+1;
    if(dik=='E')
        x=startx+1;
    if(dik=='S')
        y=starty-1;
    if(dik=='W')
        x=startx-1;
    if(x<0 || y<0 || x>finalx || y>finaly)
    {
     if(death[startx][starty]==1)
     return ;
     death[startx][starty]=1;
     p=1;
     return;
    }
   startx=x,starty=y;
}

int main()
{
    int i,j,k,l,m,n;
    scanf("%d%d",&finalx,&finaly);
     memset(death,0,sizeof(death));
    while(scanf("%d%d%*c",&startx,&starty)!=EOF)
    {
        scanf("%c",&dik);
        scanf("%s",str);
        i=0,p=0;
        while(str[i])
        {
            if(str[i]=='R')
                dikcheckr();
            if(str[i]=='L')
                dikcheckl();
            if(str[i]=='F')
            {
            samne();
            }
            if(p==1)
            break;
            i++;
        }
        if(p==1)
        printf("%d %d %c LOST\n",startx,starty,dik);
        else
        printf("%d %d %c\n",startx,starty,dik);
    }
}
