#include<stdio.h>

int main(){
    int p=1;
    char znak = '*';
    while(!(p%2==1 && p>=3 && p<=79)){ 
        scanf("%d", &p);
    }
        
    int licz = p/2;
    int i=0;
    while(i<p/2+1){ 
        int j=0;
        while(j<licz){
            printf(" ");
            j++;
        }

        j=0;
        while(j<(i*2+1)){
            printf("%c", znak);
            j++;
        }
        printf("\n");
        licz--;
        i++;
    }
    
}