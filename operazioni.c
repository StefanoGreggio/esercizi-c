#include <stdio.h>
int main(){
    int a=9;
    int b=3;
    int risultato;
    risultato=a & b;
    printf("%d\n",&risultato);

    risultato= a | b;
    printf("%d\n",&risultato);

    risultato=a^b;
    printf("%d\n",&risultato);
    return 0;
}