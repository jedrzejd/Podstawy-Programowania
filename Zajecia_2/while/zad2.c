#include<stdio.h>

int main(){
    int i=0;
    while(i<20){
        printf("1");
        int j=0;
        do{
            printf("0");
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }

}