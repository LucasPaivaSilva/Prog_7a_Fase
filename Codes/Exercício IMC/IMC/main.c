#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;
    scanf("%f",&altura);
    scanf("%f",&peso);
    imc = ((peso)/(altura*altura));
        if (imc<19){
             printf("Magra\n");
        } else if ((imc>=19)&&(imc<=25)){
             printf("Ideal\n");
        } else if ((imc>25)&&(imc<31)){
             printf("Acima\n");
        } else {
             printf("Obesa\n");
        }
    return 0;
}
