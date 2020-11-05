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
    int f;
    float sum=0.0;
    for(int j=0;j<n;j++){
        sum += tab[0][j];
    }
    float max1=0.0;
    if(sum>max1){
        max1 = sum;
        f=0;
    }
    for(int i=1;i<n;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum += tab[i][j];
        }
        if(sum>max1){
            max1 = sum;
            f=i;
        }
    }
    printf("%d\n",f);
}