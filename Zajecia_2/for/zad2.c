#include<stdio.h>

int main(){

    for(int i=0; i<20; i++){
        printf("1");
        for(int j=0;j<i;j++){
            printf("0");
        }
        printf("\n");
    }


}