/*
* Problem-solving ideas:
* It is a deceptive trick question! Array to open to, or have been reported to RE wrong, because there will be more than 5000 duplicate strings
* Used two methods to write, do not know why the first is wrong, has been OJ, second to AC!
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define A 1000010
#define B 220
char ss[ A ][ B ];
int cmp_string( const void *c , const void *d )
{
    char *a = ( char * )c;
    char *b = ( char * )d;
    return strcmp( a,b );
}
int main( )
{
    int p,q,flag;
    int i;
    char c;
    p = q = 0;
    memset(ss,'\0',sizeof( ss ) );
   while( ( c=getchar( ) ) != EOF )
   {
        if( c >='A' && c <='Z' ) c = c-'A'+'a';
        if( c >='a' && c <= 'z' ) ss[ p ][ q++ ] = c ;
        else
        {
            ss[ p++ ][ q ] = '\0';
            q = 0;
        }
   }
    qsort( ss , p , sizeof( ss[ 0 ] ) , cmp_string );
    for( i=0;i<p;i++ )
        if( strcmp( ss[ i ] ,ss[ i+1 ] ) && ss[ i ][ 0 ] !='\0' )
            printf("%s\n",ss[ i ] );
    return 0;
}
