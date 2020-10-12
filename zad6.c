#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("Rownanie m a 1 rozwiazanie:\n x = %f\n", -c/b);
    }
    else{
        float delta = (b*b - 4 * a * c);
        if (delta > 0){
            float x1, x2;
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("Rownanie ma 2 rozwiazanie:\n x = %f\n x = %f\n", x1 ,x2);
        }
        else if (delta == 0){
            float x = (-b)/(2*a);
            printf("Rownanie ma 1 rozwiazanie:\n x = %f\n",x);
        }
        else{
            printf("Nie ma rozwiazan!!\n");
        }
    }

    
    return 0;
}