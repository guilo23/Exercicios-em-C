#include <stdio.h>

void ft_div(int *A,int *B,int *DIV,int *MOD){
    *DIV = *A / *B;
    *MOD = *A % *B;
}
int main(){
    int num, num1, num2, num3;
    num = 50;
    num1 = 10;
    num2 = 0;
    num3 = 0;
    ft_div(&num, &num1, &num2, &num3);
    printf("%d %d", num2, num3);
}