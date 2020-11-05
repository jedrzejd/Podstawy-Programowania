#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n;
    time_t tt;
    srand(time(&tt));

    scanf("%d", &n);

    float tab[n+1];
    float sum;
    tab[0]=rand();
    sum = tab[0];
    for(int i=1; i<n; i++){
        tab[i]=rand();
        sum += tab[i];
    }
    printf("%f %f\n",sum, sum/n);

}