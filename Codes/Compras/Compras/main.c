#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maca, laranja, preco;

    scanf("%f",&laranja);
    scanf("%f",&maca);
    if (laranja < 5)
        (preco = laranja*2.50);
    else
        (preco = laranja*1.75);

    if (maca < 5)
        (preco = preco + (maca*4.80));
    else
        (preco = preco + (maca*3.90));

    printf("%f", preco);
    return 0;
}
