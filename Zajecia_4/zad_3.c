#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n, m;
    time_t tt;
    srand(time(&tt));

    scanf("%d", &n);
    int tab[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j]=rand();
        }
    }
    float sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += tab[i][j];
            }
            else if(i==n-j-1){
                sum += tab[i][j];
            }
        }
    }
    printf("%f", sum);
}