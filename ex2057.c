#include <stdio.h>

int main() {
    int s, t, f;

    scanf("%d %d %d", &s, &t, &f);

    int chegada = s + t + f;
    if(chegada >24){
        chegada = chegada - 24;
        printf("%d\n",chegada);
    }
     else if (chegada < 0){
        chegada = chegada + 24;
        printf("%d\n", chegada);
    } else if (chegada == 0 || chegada == 24) {
        printf("0\n");
    } else{
        printf("%d\n",chegada);
    }






    return 0;
}
