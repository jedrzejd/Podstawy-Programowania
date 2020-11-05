#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    float tab[n+1];
    float mean = 0.0;

    for(int i=0; i<n; i++){
        scanf("%f", &tab[i]);
        mean += tab[i];
    }
    mean /= n;

    printf("%f\n", mean);

}