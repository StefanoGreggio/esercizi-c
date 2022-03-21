#include <stdio.h>
int main(){
    int giorno;
    printf("inserisci il giorno della settimana");
    scanf("%d",&giorno);
    if(giorno<8)
    {
        if(giorno==1)
        printf("lunedi\n");
        if(giorno==2)
        printf("lunedi\n");
        if(giorno==3)
        printf("lunedi\n");
        if(giorno==4)
        printf("lunedi\n");
        if(giorno==5)
        printf("lunedi\n");
        if(giorno==6)
        printf("lunedi\n");
        if(giorno==7)
        printf("lunedi\n");
    }
    else
    {
        printf("non è stato inserito un giorno della settimana");
    }    
}