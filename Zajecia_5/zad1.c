#include<stdio.h>
#include<math.h>

int silnia(int n){
	int wynik = 1;
	for(int i=1;i<=n;i++){
		wynik *= i;
	}
	return wynik;
}
int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d", silnia(n));
	
	return 0;
}
