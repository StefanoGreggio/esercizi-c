#include <stdio.h>
#include <string.h>
int main(){
    char nome[]="Stefano";
    printf("la lunghezza della stringa è: %ld\n\n", strlen(nome));

    char nome2[strlen(nome)];
    strcpy(nome2,nome);
    printf("la stringa nome2 contiene: %s\n\n", nome2);


    char ciao[]="ciao ";
    strcat(ciao, nome);
    printf("la stringa ciao contiene: %s\n\n", ciao);


    
    if(strcmp(nome,nome2)==0)
    printf("le stringhe sono uguali\n\n");
    else
    printf("le stringhe non sono uguali\n\n");

    printf("la stringa nome contiene: %s\n", nome2);
    printf("la stringa nome scritta al contrario: %d\n\n",strrev(nome2));

    
    printf("la stringa nome contiene: %s\n", nome2);
    printf("la stringa scritta in minuscolo: %s\n\n", strlwr(nome2));

    printf("la stringa nome contiene: %s\n", nome2);
    printf("la stringa scritta in maiuscolo: %d\n\n", strupr(nome2));

return 0;
}