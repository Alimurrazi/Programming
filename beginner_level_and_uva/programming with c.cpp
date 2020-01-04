#include <stdio.h>
#define PI 3.14159


float process(float r ) /* function d e f i n i t i o n */
{
     float a;
     a = PI*r*r;
     return(a);
}

main( )
{
    float radius, area; /* variable declaration */
    printf ( "Radius =  ") ;
    scanf ( "%f",&radius);
    area = process(radius);
    printf ("Area = %f\n",area);
}


