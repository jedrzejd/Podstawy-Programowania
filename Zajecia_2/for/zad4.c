#include<stdio.h>

int main(){
    char znak;
    int p;

    scanf("%d %c",&p, &znak);
    int licz = p/2;
    for(int i=0; i<p/2+1; i++){
        for(int j=0; j<licz; j++){
            printf(" ");
        }
        for(int j=0; j<(i*2+1); j++){
            printf("%c", znak);
        }
        printf("\n");
        licz--;
    }


}