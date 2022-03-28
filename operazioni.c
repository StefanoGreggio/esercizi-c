#include <stdio.h>
int main()
{
    int voto;
    int risultato;
    scanf("%d", voto);
    risultato=((voto>=0)?(1):(0));
    if(risultato=1)
    printf("voto positivo");
    else
    printf("voto negativo");
    return 0;
}