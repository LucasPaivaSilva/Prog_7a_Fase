//IFSC CAMPUS FLORIANÓPOLIS
//ALUNOS: Lucas Paiva e Eduardo Borges
//23 de Abril de 2018
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ponto2D{
    float x;
    float y;
    };

struct CorRGB{
    unsigned int r;
    unsigned int g;
    unsigned int b;
    };

struct Circulo{
    struct Ponto2D Centro;
    float Raio;
    struct CorRGB cor;
};

void leInstancias(struct Ponto2D *p, struct Circulo *c){
    printf("PARA O CIRCULO\n");
    printf("Digite o valor x do centro: ");
    scanf("%f", &c->Centro.x);
    printf("Digite o valor y do centro: ");
    scanf("%f", &c->Centro.y);
    printf("Digite o valor do raio: ");
    scanf("%f", &c->Raio);
    printf("Digite o valor de R: ");
    scanf("%ud", &c->cor.r);
    printf("Digite o valor de G: ");
    scanf("%ud", &c->cor.g);
    printf("Digite o valor de B: ");
    scanf("%ud", &c->cor.b);
    printf("PARA O PONTO\n");
    printf("Digite o valor de x do ponto: ");
    scanf("%f", &p->x);
    printf("Digite o valor de y do ponto: ");
    scanf("%f", &p->y);

}

void mostraInstancias(const struct Ponto2D *p, const struct Circulo *c){
    printf("\nPARA O CIRCULO\n");
    printf("Valor do x do centro: %.2f \n", c->Centro.x);
    printf("Valor do y do centro: %.2f \n", c->Centro.y);
    printf("Valor do raio do circulo: %.2f \n", c->Raio);
    printf("Valor de RGB(%d,%d,%d)\n", c->cor.r,c->cor.g,c->cor.b );
    printf("PARA O PONTO\n");
    printf("Valor de X: %.2f \n", p->x);
    printf("Valor de Y: %.2f \n", p->y);
}

double calcDist_pont(struct Ponto2D *p1, struct Ponto2D *p2){
    return sqrt(((p2->x-p1->x)*(p2->x-p1->x))+((p2->y-p1->y)*(p2->y-p1->y)));
}

int ehInterno(const struct Ponto2D *p, const struct Circulo *c) {
    if ((calcDist_pont(&p,&c->Centro)) <= (c->Raio)){
        return 1;
    }
    else{
        return 0;
        }
}

int leArquivoInstancias(char nomearquivo[], struct Ponto2D *p, struct Circulo *c){
    char lixo[1000];
    char lixo2[1000];
    int n;
    FILE *fp;
    fp = fopen(nomearquivo,"r");
    if (fp == NULL)  {
    return(-1);
}
    n=fscanf(fp,"%s", lixo);
    if ((strcmp(lixo,"#Ponto")) != 0){
        return(-1);
    }
    n=fscanf(fp,"%f %f", &p->x, &p->y );
    n=fscanf(fp,"%s", lixo2);
    if ((strcmp(lixo2,"#Circulo")) != 0){
        return(-1);
    }
    n=fscanf(fp,"%f %f %f %u %u %u", &c->Centro.x, &c->Centro.y, &c->Raio, &c->cor.r, &c->cor.g, &c->cor.b );
    return 1;

}


int main()
 {
    int x, y;
    const char NOME_ARQ[] = "data.txt";
    struct Ponto2D ponto1;
    struct Circulo circ1;
    y = leArquivoInstancias(NOME_ARQ, &ponto1, &circ1);
    if (y == 1){
        printf("O Arquivo foi lido com sucesso!\n");
    }
    else{
        printf("Erro ao abrir arquivo ou erro na formatação!\n");
        return -1;
    }
    //leInstancias(&ponto1, &circ1);
    mostraInstancias(&ponto1, &circ1);
    x = ehInterno(&ponto1, &circ1);
    if (x == 1){
        printf("\nPonto dentro do circulo!");
    }
    else{
        printf("\nPonto fora do circulo!");
    }
    return 0;
}
