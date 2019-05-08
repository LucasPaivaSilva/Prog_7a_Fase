#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* reverse_text(char* in){
    int sizel, y, x=0;
    char* out;
    sizel = strlen(in);
    y = sizel;
    while(x<=sizel){
        in[x]=out[y];
        x++;
    }
    return out;

}

int main()
{
    char* kkk;
    kkk = reverse_text("ola");
    printf("%s\n", kkk);
    return 0;
}
