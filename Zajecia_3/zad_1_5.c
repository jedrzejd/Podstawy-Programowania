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
    sum /= n;
    float a;
    int  el;
    int roz = tab[0] - sum;
    if (roz<0)roz= roz * (-1);
    a=roz;
    el=0;
    for(int i=1; i<n; i++){
        int roz = tab[i] - sum;
        if (roz<0)roz= roz * (-1);
        if( roz< a){
            a = roz;
            el = i;
        }
    }
    printf("%d %f\n", el, tab[el]);
}