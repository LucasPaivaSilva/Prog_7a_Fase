#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Ponto2D{
    double x;
    double y;
    };
struct Retangulo{
    struct Ponto2D PSE;
    struct Ponto2D PID;
};
struct Circulo{
    struct Ponto2D Central;
    double Raio;
};
double calcDist(struct Ponto2D p1, struct Ponto2D p2){
    return sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
}
double calcDist_pont(struct Ponto2D *p1, struct Ponto2D *p2){
    return sqrt(((p2->x-p1->x)*(p2->x-p1->x))+((p2->y-p1->y)*(p2->y-p1->y)));
}


int main()
{
    double x;
    struct Ponto2D a = {1,3.5};
    struct Ponto2D b = {4.5,1};
    struct Retangulo r1 = {{3,6},{4,3}};
    struct Circulo c1 = {{6.5,5},{1}};
    struct Ponto2D p2 = {4.5,1};
    x = calcDist_pont(&a, &b);
    printf("a distancia do pontos eh %f\n", x);
    x = calcDist_pont(&r1.PSE, &r1.PID);
    printf("a diagonal dos quadrados eh %f\n", x);
    x = calcDist_pont(&c1.Central, &p2);
    printf("a distancia do circulo ao ponto eh %f\n", x);
    return 0;
}
