#include <stdio.h>
int main(){
    int num;
    printf("inserisci un numero compreso tra 3 e 10. premere 0 per chiudere");
    
    do
    {
        scanf("%d",&num);
        if(num==3){
            printf("***\n");
            printf("* *\n");
            printf("***\n");
        }
        if(num==4){
            printf("****\n");
            printf("*  *\n");
            printf("*  *\n");
            printf("****\n");
        }
        if(num==5){
            printf("*****\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*   *\n");
            printf("*****\n");
        }
        if(num==6){
            printf("******\n");
            printf("*    *\n");
            printf("*    *\n");
            printf("*    *\n");
            printf("*    *\n");
            printf("******\n");
        }
        if(num==7){
            printf("*******\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*     *\n");
            printf("*******\n");
        }
        if(num==8){
            printf("********\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("*      *\n");
            printf("********\n");
        }if(num==9){
            printf("*********\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*       *\n");
            printf("*********\n");
        }
        if(num==10){
            printf("**********\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("*        *\n");
            printf("**********\n");
        }
        if(num>10){
            printf("il numero inserito è maggiore di 10, inserire un numero compreso tra 3 e 10");
        }
        if(num<3 && num!=0){
            printf("il numero inserito è minore di 3, inserire un numero compreso tra 3 e 10");
        }
    }while(num>3 && num<11 && num!=0);
    return 0;
}