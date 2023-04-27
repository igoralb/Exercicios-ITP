#include<stdio.h>

int main(){
    float n1,n2,n3,n4,ex,media;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    media = (2*n1+3*n2+4*n3+1*n4)/10;
    printf("Media: %.1f\n", media);

    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    else if(media>=5 && media<7){
        printf("Aluno em exame.\n");
        scanf("%f",&ex);
        media = (media + ex)/2;
        printf("Nota do exame: %.1f\n", ex);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", media);
    }
    else {
        printf("Aluno reprovado.\n");

    }

    return 0;

}
