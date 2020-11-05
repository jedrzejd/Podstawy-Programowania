#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n;
    time_t tt;
    srand(time(&tt));

    scanf("%d", &n);

    float tab[n+1];
    float min1, max1;
    tab[0]=rand();
    min1 = max1 = tab[0];
    for(int i=1; i<n; i++){
        tab[i]=rand();
        if (min1 > tab[i]){
            min1 = tab[i];
        }
        if (max1 < tab[i]){
            max1 = tab[i];
        }
    }


    printf("%f %f\n", min1, max1);

}