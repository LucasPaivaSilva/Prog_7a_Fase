#include <stdio.h>
#include <stdlib.h>
/****************************
****CONVERSOR DE UNIDADES****
*Converte Libras <-> Kg
*Converte Milhas <-> Km
*Converte Kcal <-> Kj
*****************************
*Aluno: Lucas Paiva da Silva
*IFSC Florianópolis 2018
*****************************/

int main()
{
    float Entrada, Saida;
    int selecao = 1;
    printf("Bem vindo ao conversor de unidades!\n");
    while(selecao == 1){
        printf("Digite 1 para converter Libras -> Kg\n""Digite 2 para converter Kg -> Libras\n"
               "Digite 3 para converter Milhas -> Km\n""Digite 4 para converter Km -> Milhas\n"
               "Digite 5 para converter Kcal -> Kj\n""Digite 6 para converter Kj -> Kcal\n");
        scanf("%d", &selecao);
        switch (selecao){
        case 1:
            printf("Voce escolheu Libras -> Kg, Digite a quantidade a ser convertida!\n");
            scanf("%f", &Entrada);
            Saida = Entrada * 0.453592;
            printf("A quantidade em Kg eh: %f \n", Saida );
            printf("Digite 1 para outra conversao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;
         case 2:
            printf("Voce escolheu Kg -> Libras, Digite a quantidade a ser convertida!\n");
            scanf("%f", &Entrada);
            Saida = Entrada * 2.20462;
            printf("A quantidade em Libras eh: %f \n", Saida );
            printf("Digite 1 para outra conversao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;
        case 3:
            printf("Voce escolheu Milhas -> Km, Digite a quantidade a ser convertida!\n");
            scanf("%f", &Entrada);
            Saida = Entrada * 1.60934;
            printf("A quantidade em Km eh: %f \n", Saida );
            printf("Digite 1 para outra conversao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;
        case 4:
            printf("Voce escolheu Km -> Milhas, Digite a quantidade a ser convertida!\n");
            scanf("%f", &Entrada);
            Saida = Entrada * 0.621371;
            printf("A quantidade em Milhas eh: %f \n", Saida );
            printf("Digite 1 para outra conversao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;
        case 5:
            printf("Voce escolheu Kcal -> Kj, Digite a quantidade a ser convertida!\n");
            scanf("%f", &Entrada);
            Saida = Entrada * 4.184;
            printf("A quantidade em Kj eh: %f \n", Saida );
            printf("Digite 1 para outra conversao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;
        case 6:
            printf("Voce escolheu Kj -> Kcal, Digite a quantidade a ser convertida!\n");
            scanf("%f", &Entrada);
            Saida = Entrada * 0.239006;
            printf("A quantidade em Kcal eh: %f \n", Saida );
            printf("Digite 1 para outra conversao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;
        default:
            printf("Voce digitou um numero diferente de 1,2,3,4,5,6!\n");
            printf("Digite 1 para voltar a selecao e qualquer outro numero para sair\n");
            scanf("%d", &selecao);
            break;

        }
    }
    return 0;
}
