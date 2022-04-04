#include <stdio.h>

int main(){
    int indice=10;   
    int v[indice];
    int tmp=0;
    for(int i=0;i<indice;i++){
        scanf("%d",&tmp);
        v[i]=tmp;
    }
    printf("\n");
    for(int i=0;i<indice;i++){
        if(v[i]%2==0){
        printf("%d\n",v[i]);
        }
    }
    for(int i=0;i<indice;i++){
        if(v[i]%2!=0){
        printf("%d\n",v[i]);
        }
    }
    return 0;
}