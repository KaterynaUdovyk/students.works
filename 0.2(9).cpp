#include <stdio.h>
#include <cmath>
int main ()
{
    double r,h,v;
    printf ("");
    scanf ("%lf %lf",&r,&h);
    v=M_PI*r*r*h;
    printf ("v=%lf",v);

    return 0;
}