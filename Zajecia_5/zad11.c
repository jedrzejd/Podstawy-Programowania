
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

void uzp(int n, int tab [n][n], int *f, int *g){
	int sum=0;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j]=rand();
        }
    }
    int max1=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            sum = tab[i][j];
            if(sum>max1){
                max1 = sum;
                *f = i;
                *g = j;
            }
        }
    }
}

int main(){
	srand(time(0));
	int n, f=0, g=0;
	scanf("%d",&n);
	
	int tab[n][n];
	uzp(n, tab, &f, &g);
	printf("%d %d\n",f ,g);

	return 0;
}
