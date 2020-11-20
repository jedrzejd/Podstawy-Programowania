#include<stdio.h>
#include<math.h>

void zamiana(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	
	zamiana(&a, &b);
	
	printf("%d %d\n", a, b);
	
	return 0;
}

