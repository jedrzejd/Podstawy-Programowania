#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if (n%2 == 0){
        if (n>=0){
            printf("Podano liczbę parzystą dodatnią.\n");
        }

        else{
            printf("Podano liczbę parzystą ujemną.\n");
        }
        
    }

    else{
        if (n>=0){
            printf("Podano liczbę nieparzystą dodatnią.\n");
        }
        
        else{
            printf("Podano liczbę nieparzystą ujemną.\n");
        }
    }
    

    return 0;
}