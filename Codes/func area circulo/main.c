#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float areacirc(float raio)
{
    float x;
    x = raio*raio*M_PI;
    return x;
}

int main()
{
    float r, output;
    printf("Digite um raio!\n");
    scanf("%f", &r);
    output = areacirc(r);
    printf("%f", output);
    return 0;
}
