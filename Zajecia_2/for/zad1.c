#include<stdio.h>

int main(){
    int n, a;
    scanf("%d", &n);

    float wynik = 0.0;

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        wynik += a;
    }

    wynik /= n;
    printf("%f", wynik);

}