#include <stdio.h>
#include <stdlib.h>

int main()
{
    int controle=0, controle2=0;
    int x;
    scanf("%d", &x);
    for(controle = 1; controle<=x; controle++)
    {
        for(controle2 = 1; controle2<= controle; controle2++){
            printf("%d", (controle - controle2 + 1));
            if (controle2 == controle){
                break;
            }
            else{
                printf("#");
            }

        }
        printf("\n");
    }


    return 0;
}
