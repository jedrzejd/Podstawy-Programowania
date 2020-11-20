#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int uzp(int n, int tab1[n][n]){
	int sum=0;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab1[i][j]=rand();
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += tab1[i][j];
            }
            else if(i==n-j-1){
                sum += tab1[i][j];
            }
        }
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
