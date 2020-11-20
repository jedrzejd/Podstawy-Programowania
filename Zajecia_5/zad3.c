#include<stdio.h>
#include<math.h>

int suma(int n, int tab1[]){
	int wyn=0;
	for(int i=0;i<n;i++){
		wyn += tab1[i];
	}
	return wyn;
}

int main(){
	int tab[4]={1, 2, 35, 100};
	int n = 4;
	printf("%d\n", suma(n, tab));
		
	return 0;
}

