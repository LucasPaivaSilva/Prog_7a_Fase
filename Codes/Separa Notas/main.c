#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    x = seleciona_notas();
    separa_e_imprime_nota(x);
    return 0;
}

int seleciona_notas()
{
    int in_value;
    while(1){
        printf("Digite um valor de entrada: ");
        scanf("%d", &in_value);
        if(((in_value%5)==0)&&(in_value>=5)){
            break;
        }
        else{
            printf("O valor precisa ser maior ou igual a 5\n"
                    "e preicsa ser divisivel por 5\n");
        }
    }
    printf("Valor selecionado:%d\n", in_value);
    return in_value;
}

int separa_e_imprime_nota(in_value)
{
    int note_list[4] = {0, 0, 0, 0};
    while (1){
        if (in_value >= 100){
            in_value = in_value - 100;
            note_list[3] = note_list[3] + 1;
            continue;
        }
        if (in_value >= 50){
            in_value = in_value - 50;
            note_list[2] = note_list[2] + 1;
            continue;
        }
        if (in_value >= 10){
            in_value = in_value - 10;
            note_list[1] = note_list[1] + 1;
            continue;
        }
        if (in_value >= 5){
            in_value = in_value - 5;
            note_list[0] = note_list[0] + 1;
            continue;
        }
        if (in_value == 0){
            break;
        }
    }
    printf("Notas de 5:   %d\n", note_list[0]);
    printf("Notas de 10:  %d\n", note_list[1]);
    printf("Notas de 50:  %d\n", note_list[2]);
    printf("Notas de 100: %d\n", note_list[3]);
}
