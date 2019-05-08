#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE * fp;
    fp = fopen ("teste.txt","w");
    if (fp == NULL)
    exit(1);

    fprintf(fp, "%d %s\n", 1923, "Avai");
    fprintf(fp, "%d %s\n", 1921, "Figueirense");
    fprintf(fp, "%d %s\n", 1909, "Internacional");
    fclose(fp);
    return(0);
}
