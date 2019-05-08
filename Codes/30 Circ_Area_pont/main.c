#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_r(float r,float *c, float *a){
    *c=2*M_PI*r;
    *a=M_PI*r*r;
}


int main()
{
    float r, c, a;
    printf("Digita ai irmao!\n");
    scanf("%f",&r);
    calc_r(r, &c,&a);
    printf("A circunferencia eh: %f\n A area eh: %f", c, a);
    return 0;
}
