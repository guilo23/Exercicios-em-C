#include <stdio.h>
void ft_swap(int *A, int *B){
int C;
    C = *A;
    *A = *B;
    *B = C;
}
int main(){
   int num = 30;
   int num1 = 40;
    ft_swap(&num, &num1);
    printf("%d %d", num,num1);    
}