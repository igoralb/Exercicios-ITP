#include<stdio.h>

int main(){

    int T,H,M,S, aux;
    scanf("%d", &T);

    H = T/3600;
    aux = T%3600;
    M = aux/60;
    S = aux%60;

    printf("%d:%d:%d\n", H,M,S);
    return 0;
}
