#include <stdio.h>
int main(){
    int giorno;
    printf("inserisci il giorno della settimana in numero:");
    scanf("%d",&giorno);
    switch(giorno){
        case 1: printf("lunedi\n");break;
        case 2: printf("martedi\n");break;
        case 3: printf("mercoledi\n");break;
        case 4: printf("giovedi\n");break;
        case 5: printf("venerdi\n");break;
        case 6: printf("sabato\n");break;
        case 7: printf("domenica\n");break;
    }
    if(giorno>=8){
        printf("il numero inserito non è un giorno della settimana");
    }
}