#include <stdio.h>

void ft_ft(int *nbr){
    *nbr = 42;
}
int main(){
    int *A;
    int B = 0;
    A = &B;
    ft_ft(A);
    printf("%d\n", *A);
}