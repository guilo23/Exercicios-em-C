#include <stdio.h>

int main(){
    int A,B;
        scanf("%d %d", &A, &B);
    if(B == 0){
        printf("divisão por zero não permitida\n");
    }
    else if(A%B == 0)
    {
        printf("O numero %d é divisivel por %d\n", A, B);
    }
    else{
        printf("O numero %d não é divisivel por %d\n", A, B);
    }
}