#include<stdio.h>

int main(){
    int i = 1;
    while(i<10){ 
        int j=1;
        while(j<10){
            printf("%3d", i*j);
            j++;
        }
        printf("\n");
        i++;
    }

}