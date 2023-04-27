#include <stdio.h>

int main() {
    int h1,m1,h2,m2,mf;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    int hf = (h2*60+m2)-(h1*60+m1);

    if (hf <=0){

        mf =(hf + 24*60)%60;
        hf = (hf + 24*60)/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf,mf);
    }
       else{
        mf =(hf)%60;
        hf = (hf)/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf,mf);
       }


    return 0;
}
