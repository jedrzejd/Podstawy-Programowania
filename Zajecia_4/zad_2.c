#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n, m;
    time_t tt;
    srand(time(&tt));

    scanf("%d", &n);
    float tab[n+1],tab1[n+1];
    for(int i=0;i<n;i++){
        tab[i]=rand();
        tab1[i]=rand();
    }
    for(int i=0;i<n;i++){
        printf("%f ",tab[i]*tab1[i]);
    }
}