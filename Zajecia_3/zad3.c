#include<stdio.h>


int main(){
    int n;

    scanf("%d", &n);

    float tab[n+1];

    for(int i=0; i<n; i++){
        scanf("%f", &tab[i]);
    }

    for(int i=0; i<n/2; i++){
        int a = tab[i];
        int b = tab[n-i-1];
        int c = a;
        tab[i] = b;
        tab[n-i-1] = c;
    }

    for(int i=0; i<n; i++){
        printf("%f ", tab[i]);
    }

}