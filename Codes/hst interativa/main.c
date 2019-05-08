/****************************
*****HISTÓRIA INTERATIVA*****
*****************************
*Aluno: Lucas Paiva da Silva*
*IFSC Florianópolis 2018*****
*****************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int invalid=1;

int main()
{
    char in[50];
    printf("Vc esta em uma casa de campo com seus amigos, sao 10 horas da noite\n""A lenha da fogueira acaba e vc eh escolhido para pegar mais\n"
           "Ao sair da casa voce se depara com o campo a esquerda e uma floresta densa a direita, para que lado vc vai?\n"
           "(esquerda ou direita)\n");
    fgets(in, sizeof(in),stdin);
    printf("voce escolheu %s", in);
    if (strcmp("esquerda\n", in) == 0){
        printf("Voce caminha pelo campo e ao longe avista fogo, voce se aproxima?\n"
               "(sim ou nao)\n");
        fgets(in, sizeof(in),stdin);
        printf("voce escolheu %s", in);
        if (strcmp("sim\n", in) == 0){
            printf("voce se aproxima e encontra uma fogueira, quando chega perto da mesma comeca a escutar barulhos\n"
                   "voce percebe que os barulhos estao vindo de um grande buraco perto de onde voce esta\n"
                   "voce se aproxima?\n"
                   "(sim ou nao)\n");
            fgets(in, sizeof(in),stdin);
            printf("voce escolheu %s", in);
            if (strcmp("sim\n", in) == 0){
                printf("voce se aproxima da beira do buraco e ao olhar pro fundo do mesmo, tropeca, cai e morre\n");
                GAMEOVER();
            }
            else if (strcmp("nao\n", in) == 0){
                    printf("voce decide nao se aproximar, encontra a madeira em uma fogueira apagada por perto e volta feliz pra casa\n");
                    VITORIA();
                }
        }
        else if (strcmp("nao\n", in) == 0){
            printf("Voce decide nao ir e encontra uma pilha de gravetos, porem existe um problema, um barulho agudo sai da mesma\n"
                   "Voce se aproxima?\n"
                   "(sim ou nao)\n");
            fgets(in, sizeof(in),stdin);
            printf("voce escolheu %s", in);
            if (strcmp("sim\n", in) == 0){
                printf("voce se aproxima da pilha, quase no mesmo instante, uma cobra pula em voce e te pica, voce morre agonizando\n");
                GAMEOVER();
            }
            else if (strcmp("nao\n", in) == 0){
                    printf("voce decide nao se aproximar, encontra a madeira em uma fogueira apagada por perto e volta feliz pra casa\n");
                    VITORIA();
            }
        }
    }

    else if (strcmp("direita\n", in) == 0){
        printf("Voce caminha pela floresta densa, ao longe voce escuta um barulho, voce se aproxima do barulho?\n"
               "(sim ou nao)\n");
        fgets(in, sizeof(in),stdin);
        printf("voce escolheu %s", in);
        if (strcmp("sim\n", in) == 0){
            printf("voce se aproxima do local de onde vem o barulho, eh um pequeno poco artesiano, o barulho parece\n"
                   "vir de dentro dele, voce olha para dentro do mesmo?\n"
                   "(sim ou nao)\n");
            fgets(in, sizeof(in),stdin);
            printf("voce escolheu %s", in);
            if (strcmp("sim\n", in) == 0){
                printf("voce se aproxima da beira do poco e ao olar pro fundo do mesmo, algo lhe puxa, voce cai e morre\n");
                GAMEOVER();
            }
            else if (strcmp("nao\n", in) == 0){
                    printf("voce decide nao se aproximar, porem eh tarde, um vulto se aproxima, passa por dentro de voce e te mata\n");
                    GAMEOVER();
                }
        }
        else if (strcmp("nao\n", in) == 0){
            printf("Voce decide nao seguir o barulho, afinal, um barulho daqueles nao pode ser coisa boa\n"
                   "apos alguns minutos caminhando, voce comeca a sentir calafrios...\n"
                   "Voce olha para frente e se depara com um vulto, para qual lado voce corre?\n"
                   "(esquerda ou direita)\n");
            fgets(in, sizeof(in),stdin);
            printf("voce escolheu %s", in);
            if (strcmp("esquerda\n", in) == 0){
                printf("voce comeca a correr muito e rapidamente alcanca o campo que voce viu ao sair da casa\n"
                       "e logo em seguida comeca a correr para mesma, conseguindo voltar para casa\n");
                       VITORIA();
            }
            else if (strcmp("direita\n", in) == 0){
                    printf("voce comeca a correr para direita, porem nunca chega a lugar nenhum...\n"
                           "Eventualmente o vulto te alcanca e voce morre");
                           GAMEOVER();
            }
        }
    }
    if (invalid == 1)
    printf("Voce digitou um comando invalido\n");
    return 0;
}

int GAMEOVER()
{
    printf(
" _____                        _____                \n"
"|  __ |                      |  _  |               \n"
"| |  || __ _ _ __ ___   ___  | | | |_   _____ _ __ \n"
"| | __ | _` | '_ ` _ | | _ | | | | | | | | _ | '__|\n"
"| |_| | (_| | | | | | |  __/ | |_| || V |  __| |   \n"
"  \____||__,_|_| |_| |_||___| | ___ | |_| |___|_|   \n"
);
invalid = 0;

}

int VITORIA()
{
    printf(
"Parabens, Voce conseguiu voltar para casa em segurança!\n"
"Voce Zerou o jogo!"
);
invalid = 0;
}

