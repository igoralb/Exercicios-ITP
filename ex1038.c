#include<stdio.h>

int main(){
    int a,q;
    float v;
    scanf("%d%d",&a,&q);

    if ( a==1){
            v = q*4;
         printf("Total: R$ %.2f\n", v);
    }
    else if( a==2){
            v = q*4.5;
         printf("Total: R$ %.2f\n", v);
    }
    else if ( a==3){
            v = q*5;
         printf("Total: R$ %.2f\n", v);
    }
    else if ( a==4){
            v = q*2;
        printf("Total: R$ %.2f\n", v);
    }
    else if ( a==5){
            v = q*1.5;
        printf("Total: R$ %.2f\n", v);
    }

    return 0;
}
