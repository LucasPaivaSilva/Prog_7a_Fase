#include <stdio.h>
#include <stdlib.h>

int valor_maior(int n1, int n2, int n3)
{
    if (n1>=n2 && n1>=n3)
        return n1;
        else if (n2>=n1 && n2>=n3)
            return n2;
            else if (n3>=n1 && n3>=n2)
                return n3;

}

int main()
{
    int a,b,c,r;
    printf("Digite n1!\n");
    scanf("%d", &a);
    printf("Digite n2!\n");
    scanf("%d", &b);
    printf("Digite n3!\n");
    scanf("%d", &c);
    r = valor_maior(a, b, c);
    printf("o maior eh %d",r);
    return 0;
}
