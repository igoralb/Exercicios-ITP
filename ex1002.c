#include <stdio.h>

int main() {
    int DIFERENCA, A,B,C,D;
    //printf("diigite 4 valores:\n");
    scanf("%d%d%d%d", &A,&B,&C,&D);
    DIFERENCA = D*(A * B - C * D);
    printf("DIFERENCA = %d\n");
    return 0;
}
