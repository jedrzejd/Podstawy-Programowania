#include <stdio.h>
int main(){
    float x, y;
    char znak;
    scanf("%f %c %f", &x, &znak, &y);

    if(znak == '*'){
        printf("%f\n", x*y);
    }

    else if(znak == '+'){
        printf("%f\n", x+y);
    }

    else if(znak == '-'){
        printf("%f\n", x-y);
    }

    else if(znak == '/'){
        if(y==0)
            printf("Nie mona dzielić przez zero!!!\n");
        else
            printf("%f\n", x/y);
    }

    return 0;
}