#include <stdio.h>
int main(){
    float a1, a2, b1, b2, c1, c2;
    scanf("%f %f %f", &a1, &b1, &c1);
    scanf("%f %f %f", &a1, &b2, &c2);

    float x = (c1*b2 - b1*c2) / (a1*b2 + a2*b1);

    float y = (c2 - a2*x) / b2;

    printf("x = %f\n y = %f\n", x, y);
    

    
    return 0;
}