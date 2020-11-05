#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    float tab[n+1];

    for(int i=0; i<n; i++){
        float a;

        scanf("%f", &a);
        tab[i]=a;
        
        int ok=0;

        for(int j=0; j<i; j++){
            if(tab[j] == a){
                ok=1;
                printf("jest\n");
                break;
            }
        }
        if (ok==0){
            printf("Nie ma\n");
        }

    }

}