#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    float tab[n+1];
    float max1;

    scanf("%f", &tab[0]);
    max1 = tab[0];

    for(int i=1; i<n; i++){
        scanf("%f", &tab[i]);
        if (tab[i] > max1){
            max1 = tab[i];
        }
    }

    printf("%f\n", max1);

}