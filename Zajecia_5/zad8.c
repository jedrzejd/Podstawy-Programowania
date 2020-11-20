#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int uzp(int n, int tab [n][n]){
	int sum=0;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j]=rand();
        }
    }
    for(int i=0;i<n;i++){
        sum += tab[i][0];
    }
    for(int i=1;i<n;i++){
        sum += tab[0][i];
    }
    for(int i=1;i<n-1;i++){
        sum += tab[i][n-i];
    }
    return sum;
}

int main(){
	srand(time(0));
	int n;
	scanf("%d",&n);
	
	int tab[n][n];
	uzp(n, tab);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",tab[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}

