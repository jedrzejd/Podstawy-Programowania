#include<stdio.h>
#include<math.h>

int main(){
	int a, *p;
	// p – wskaźnik
	// *p – wartość przechowywana w miejscu pamięci rozpoczynającym się od p i mającym rozmiartylu bajtów ilu potrzeba do przechowania liczy typu int
	a=10;
	p=&a;
	*p=30;
	printf("%d", *p);
	
	return 0;
}
