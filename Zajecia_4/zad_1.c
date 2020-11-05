#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n, m;
    time_t tt;
    srand(time(&tt));

    scanf("%d %d", &n,&m);
    int tab[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab[i][j]=rand();
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}