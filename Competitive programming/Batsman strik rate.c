#include<stdio.h>
#include<math.h>
int main ()
{
    double R,b,k=0;

    scanf ("%lf%lf",&R,&b);
    k=(R*100)/b;



    printf ("Strike Rate = %.2lf\n",k);
}
