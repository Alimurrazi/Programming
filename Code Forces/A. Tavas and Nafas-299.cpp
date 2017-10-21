#include<stdio.h>
#include<string.h>

int main()
{
    char str[105][105];
    int i,j,k,l,m,n;
    memset(str,'\0',sizeof(str));
    strcpy(str[0],"zero");
    strcpy(str[1],"one");
    strcpy( str[2],"two" );
    strcpy( str[3],"three" );
    strcpy ( str[4],"four" );
    strcpy ( str[5],"five" );
    strcpy ( str[6],"six" );
    strcpy(  str[7],"seven" );
    strcpy  ( str[8],"eight" );
    strcpy ( str[9],"nine" );
    strcpy ( str[10],"ten" );
    strcpy ( str[11],"eleven" );
    strcpy( str[12],"twelve" );
    strcpy(  str[13],"thirteen" );
    strcpy(  str[14],"fourteen" );
    strcpy ( str[15],"fifteen" );
    strcpy(  str[16],"sixteen" );
    strcpy ( str[17],"seventeen" );
    strcpy (  str[18],"eighteen" );
    strcpy (  str[19],"nineteen" );
    strcpy (  str[20],"twenty" );
    strcpy ( str[30],"thirty" );
    strcpy(  str[40],"forty" );
    strcpy(  str[50],"fifty" );
    strcpy   ( str[60],"sixty" );
    strcpy (  str[70],"seventy" );
    strcpy (  str[80],"eighty" );
    strcpy (  str[90],"ninety" );
    while(scanf("%d",&n)==1)
    {
        if(str[n][0]!='\0')
            printf("%s\n",str[n]);
        else
        {
            k=n%10;
            n=n/10;
            n=n*10;
            printf("%s",str[n]);
            printf("-");
            printf("%s\n",str[k]);
        }
    }
}
