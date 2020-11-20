#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

void uzp(int w, int k, int tab1[w][k]){
	for(int i=0;i<w;i++){
		for(int j=0;j<k;j++){
			tab1[i][j] = rand()%10;
		}
	}
}

int main(){
	srand(time(0));
	int w, k;
	scanf("%d%d",&w,&k);
	
	int tab[w][k];
	uzp(w, k, tab);
	
	for(int i=0;i<w;i++){
		for(int j=0;j<k;j++){
			printf("%d ",tab[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
