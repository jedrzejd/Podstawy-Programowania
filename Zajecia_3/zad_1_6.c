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
    for(int i=0; i<n; i++){
        tab[i]=rand();
    }
    int el;
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(tab[i]>tab[j]){
                cnt++;
            }
        }
        if (cnt == n/2){
            printf("Jest %f\n", tab[i]);
            break;
        }
    }
}