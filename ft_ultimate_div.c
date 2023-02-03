#include <stdio.h>

void ft_div(int *A, int *B){
    int DIV,MOD;
    DIV = *A / *B;
    MOD = *A % *B;
    *A = DIV;
    *B = MOD;
}
int main(){
    int num = 50;
    int num1 = 10;
    ft_div(&num,&num1);
    printf("%d %d\n", num,num1);
}