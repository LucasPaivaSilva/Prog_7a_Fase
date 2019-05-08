#include <stdio.h>
#include <stdlib.h>
int poschrstr(const char *str, char chr)
{
    int x=0;
    while(*str!='\0'){
        if(*str == chr){
            return x;
        }
        str++;
        x++;
    }
    return -1;
}


int main()
{
    char str[50], c;
    printf("Digite a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Digite o caracter: ");
    scanf("%c", &c);
    printf("%d", poschrstr(&str, c));
    return 0;
}
