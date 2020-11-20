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
    int f;
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
    return f;
}

int main(){
	srand(time(0));
	int n;
	scanf("%d",&n);
	
	int tab[n][n];
	int c = uzp(n, tab);
	printf("%d\n",c);
	/*
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",tab[i][j]);
		}
		printf("\n");
	}
	*/	
	return 0;
}

