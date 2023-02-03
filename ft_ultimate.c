#include <stdio.h>

void ft_ultimate(int ******nbr){
    ******nbr = 42;
}
int main(){
    int A = 0;
    int *B,**C,***D,****E,*****F,******G;
     B = &A;
     C = &B;
     D = &C;
     E = &D;
     F = &E;
     G = &F;
    ft_ultimate(G);
    printf("%d\n", ******G);
}