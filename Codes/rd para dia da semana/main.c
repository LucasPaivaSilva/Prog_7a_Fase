#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rd2weekday(int rd, char lang[])
{
    const char diapt[7][10] = {"domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sabado"};
    const char diaes[7][10] = {"domingo", "lunes", "martes", "miercoles", "jueves", "viernes", "sabado"};
    const char diaen[7][10] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    int out = rd%7;
    if (strcmp("pt\n", lang) == 0){
        printf("%s", diapt[out]);
    }else if(strcmp("en\n", lang) == 0){
        printf("%s", diaen[out]);
    }else if(strcmp("es\n", lang) == 0){
        printf("%s", diaes[out]);
    }
}
int main()
{
    int i; char in[5];
    scanf("%d", &i);
    fflush(stdin);
    fgets(in, sizeof(in),stdin);
    rd2weekday(i, in);
    return 0;
}
